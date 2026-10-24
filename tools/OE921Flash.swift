// Native macOS HID transport for the already inspected OE921 upgrade protocol.
// enumerate / plan do not open devices or transmit reports. flash requires the
// exact reviewed image hash and normal-device identity before entering BOOT.
import Foundation
import IOKit
import IOKit.hid
import CryptoKit

enum FlashError: Error, CustomStringConvertible {
    case invalid(String)
    var description: String { if case .invalid(let text) = self { return text }; return "error" }
}
func require(_ condition: Bool, _ text: String) throws {
    if !condition { throw FlashError.invalid(text) }
}
func hex(_ bytes: [UInt8]) -> String { bytes.map { String(format:"%02x", $0) }.joined() }
func digest(_ bytes: [UInt8]) -> String { hex(Array(SHA256.hash(data: Data(bytes)))) }
func emit(_ object: [String:Any]) {
    let bytes = try! JSONSerialization.data(withJSONObject: object, options: [.sortedKeys])
    print(String(data:bytes,encoding:.utf8)!); fflush(stdout)
}
func pump(_ seconds: Double = 0.01) {
    CFRunLoopRunInMode(CFRunLoopMode.defaultMode, seconds, true)
}
func number(_ d: IOHIDDevice, _ key: String) -> Int {
    (IOHIDDeviceGetProperty(d,key as CFString) as? NSNumber)?.intValue ?? -1
}
struct Capabilities {
    var bits: [String:Int] = [:]
    init(_ descriptor: [UInt8]) {
        var i=0, size=0, count=0, id=0
        var stack: [(Int,Int,Int)] = []
        while i<descriptor.count {
            let prefix=descriptor[i]; i+=1
            if prefix==0xfe {
                guard i+1<descriptor.count else { break }
                i += 2 + Int(descriptor[i]); continue
            }
            let n=(prefix&3)==3 ? 4 : Int(prefix&3)
            guard i+n<=descriptor.count else { break }
            var value=0
            for j in 0..<n { value |= Int(descriptor[i+j]) << (8*j) }
            i+=n
            let kind=(prefix>>2)&3, tag=prefix>>4
            if kind==1 {
                if tag==7 { size=value }; if tag==8 { id=value }; if tag==9 { count=value }
                if tag==10 { stack.append((size,count,id)) }
                if tag==11, let saved=stack.popLast() { (size,count,id)=saved }
            }
            if kind==0 && [8,9,11].contains(Int(tag)) {
                let category=tag==8 ? "input" : (tag==9 ? "output" : "feature")
                bits["\(category):\(id)",default:0] += size*count
            }
        }
    }
    func payload(_ kind:String,_ id:Int) -> Int { (bits["\(kind):\(id)"] ?? 0)/8 }
}
struct Endpoint {
    let device: IOHIDDevice
    let vid:Int, pid:Int, version:Int, location:Int, page:Int
    let name:String, capabilities:Capabilities
    init(_ device:IOHIDDevice) {
        self.device=device
        vid=number(device,kIOHIDVendorIDKey); pid=number(device,kIOHIDProductIDKey)
        version=number(device,kIOHIDVersionNumberKey); location=number(device,kIOHIDLocationIDKey)
        page=number(device,kIOHIDPrimaryUsagePageKey)
        name=IOHIDDeviceGetProperty(device,kIOHIDProductKey as CFString) as? String ?? ""
        let descriptor=IOHIDDeviceGetProperty(device,kIOHIDReportDescriptorKey as CFString) as? Data ?? Data()
        capabilities=Capabilities(Array(descriptor))
    }
    var json:[String:Any] { ["vid":vid,"pid":pid,"version":version,"location":location,
        "usagePage":page,"name":name,"reportBits":capabilities.bits] }
}
func enumerate() -> [Endpoint] {
    let manager=IOHIDManagerCreate(kCFAllocatorDefault,IOOptionBits(kIOHIDOptionsTypeNone))
    let matches:[[String:Int]]=[
        [kIOHIDVendorIDKey:0x05ac,kIOHIDProductIDKey:0x024f],
        [kIOHIDVendorIDKey:0x3554,kIOHIDProductIDKey:0xf808]]
    IOHIDManagerSetDeviceMatchingMultiple(manager,matches as CFArray)
    let set=IOHIDManagerCopyDevices(manager) as? Set<IOHIDDevice> ?? []
    return set.map { Endpoint($0) }
}
struct Image {
    let bytes:[UInt8], reset:[UInt8], prepare:[UInt8], packets:[[UInt8]]
    let sha:String, payloadLength:Int, base:UInt32
    init(_ path:String) throws {
        let b=Array(try Data(contentsOf:URL(fileURLWithPath:path)))
        try require(b.count==64628,"Unexpected firmware file length")
        let h=digest(b)
        try require(h=="c10ffdff79e7b55a1b3f688d5d83d600ba38a8cf5f32855276b9204c87a063dd",
                    "Only the reviewed OE921 v1.66 radio1800 candidate is admitted")
        func le(_ i:Int)->UInt32 { (0..<4).reduce(UInt32(0)) { $0 | UInt32(b[i+$1]) << (8*$1) } }
        try require(le(4)==720 && le(8)==56436 && le(12)==0 && le(16)==0x166,"Wrong container metadata")
        let sum=b[8..<720].reduce(UInt32(0)){$0+UInt32($1)}
        try require(le(0)==0x55555555 &- sum,"Header checksum mismatch")
        func command(_ index:Int) throws ->[UInt8] {
            let offset=23+64*index
            try require(b[offset+1]==0,"Feature transport was not expected")
            return Array(b[(offset+2)..<(offset+2+Int(b[offset]))])
        }
        let r=try command(6), p=try command(7), template=try command(8)
        try require(r.count==17 && r[0]==8 && r[1]==0x0d,"Reset frame mismatch")
        try require(p.count==49 && p[0]==6 && p[1]==0xb0,"Prepare frame mismatch")
        try require(template.count==49 && template[0]==6 && template[1]==0xb1,"Data frame mismatch")
        let address=template[5..<9].reduce(UInt32(0)){($0<<8)|UInt32($1)}
        try require(address==0x08001600,"Unexpected Flash write base")
        var frames:[[UInt8]]=[]
        for offset in stride(from:0,to:56436,by:32) {
            let count=min(32,56436-offset), target=address+UInt32(offset)
            var frame=[UInt8](repeating:0,count:49)
            frame[0]=6; frame[1]=0xb1; frame[2]=offset+count==56436 ? 0xc1:0xc0
            frame[3]=UInt8(count)
            for j in 0..<4 { frame[5+j]=UInt8(truncatingIfNeeded:target >> (24-8*j)) }
            for j in 17..<49 { frame[j]=255 }
            for j in 0..<count { frame[17+j]=b[8192+offset+j] }
            frames.append(frame)
        }
        try require(frames.count==1764 && frames.last![3]==20,"Packet geometry mismatch")
        var reconstructed:[UInt8]=[]
        for frame in frames { reconstructed += frame[17..<(17+Int(frame[3]))] }
        try require(reconstructed==Array(b[8192...]),"Packet content round-trip mismatch")
        bytes=b; reset=r; prepare=p; packets=frames; sha=h; payloadLength=56436; base=address
    }
    var plan:[String:Any] { ["sha256":sha,"fileLength":bytes.count,"payloadLength":payloadLength,
        "packetCount":packets.count,"lastPacketLength":packets.last![3],
        "loadAddress":String(format:"0x%08x",base),"endExclusive":"0x0800f274",
        "resetFrame":hex(reset),"prepareFrame":hex(prepare),
        "firstDataFrame":hex(packets.first!),"lastDataFrame":hex(packets.last!),
        "packetRoundtripVerified":true,"transmitted":false] }
}
final class Trace {
    let handle:FileHandle
    init(_ path:String) throws {
        try require(!FileManager.default.fileExists(atPath:path),"Refusing to overwrite trace")
        FileManager.default.createFile(atPath:path,contents:nil)
        handle=try FileHandle(forWritingTo:URL(fileURLWithPath:path))
    }
    func event(_ kind:String,_ fields:[String:Any]=[:]) {
        var object=fields; object["event"]=kind; object["time"]=ISO8601DateFormatter().string(from:Date())
        let bytes=try! JSONSerialization.data(withJSONObject:object,options:[.sortedKeys])
        try! handle.write(contentsOf:bytes+Data([10]))
    }
    deinit { try? handle.close() }
}
final class Session {
    let endpoint:Endpoint, trace:Trace
    let buffer:UnsafeMutablePointer<UInt8>
    var reports:[[UInt8]]=[]
    var callbackFailure:String?
    init(_ endpoint:Endpoint,_ trace:Trace) throws {
        self.endpoint=endpoint; self.trace=trace
        buffer = .allocate(capacity:512); buffer.initialize(repeating:0,count:512)
        let status=IOHIDDeviceOpen(endpoint.device,IOOptionBits(kIOHIDOptionsTypeNone))
        guard status==kIOReturnSuccess else {
            buffer.deallocate(); throw FlashError.invalid(String(format:"HID open failed: 0x%08x",status))
        }
        IOHIDDeviceRegisterInputReportCallback(endpoint.device,buffer,512,{ context,result,_,_,reportID,report,length in
            guard let context=context else { return }
            let session=Unmanaged<Session>.fromOpaque(context).takeUnretainedValue()
            // macOS exposes all collections on one interface. Ignore keyboard,
            // media and unrelated vendor reports; retain only this protocol ID.
            let expectedID:UInt32=session.endpoint.vid==0x3554 ? 6 : 8
            guard reportID==expectedID else { return }
            guard result==kIOReturnSuccess else { session.callbackFailure="Input callback failed \(result)"; return }
            let raw=Array(UnsafeBufferPointer(start:report,count:length))
            session.trace.event("input",["reportID":reportID,"hex":hex(raw)])
            let expected=reportID==6 ? 48 : 16
            if length==expected+1 && raw.first==UInt8(reportID) {
                session.reports.append(Array(raw.dropFirst()))
            } else if length==expected {
                session.reports.append(raw)
            } else {
                session.callbackFailure="Unexpected input report length \(length), ID \(reportID)"
            }
        },Unmanaged.passUnretained(self).toOpaque())
        IOHIDDeviceScheduleWithRunLoop(endpoint.device,CFRunLoopGetCurrent(),CFRunLoopMode.defaultMode.rawValue)
        trace.event("opened",endpoint.json)
    }
    func send(_ frame:[UInt8]) throws {
        trace.event("output",["hex":hex(frame)])
        let result=frame.withUnsafeBufferPointer {
            IOHIDDeviceSetReport(endpoint.device,kIOHIDReportTypeOutput,CFIndex(frame[0]),$0.baseAddress!,frame.count)
        }
        try require(result==kIOReturnSuccess,String(format:"HID report write failed: 0x%08x",result))
    }
    func wait(_ seconds:Double,accept:([UInt8]) throws -> Bool) throws ->Bool {
        let deadline=Date().addingTimeInterval(seconds)
        while Date()<deadline {
            while !reports.isEmpty { if try accept(reports.removeFirst()) { return true } }
            if let failure=callbackFailure { throw FlashError.invalid(failure) }
            pump()
        }
        return false
    }
    deinit {
        IOHIDDeviceUnscheduleFromRunLoop(endpoint.device,CFRunLoopGetCurrent(),CFRunLoopMode.defaultMode.rawValue)
        IOHIDDeviceRegisterInputReportCallback(endpoint.device,buffer,512,nil,nil)
        IOHIDDeviceClose(endpoint.device,IOOptionBits(kIOHIDOptionsTypeNone))
        buffer.deallocate()
    }
}
func selectNormal() throws ->Endpoint {
    let normal=enumerate().filter { $0.vid==0x05ac && $0.pid==0x024f &&
        $0.capabilities.payload("output",8)==16 && $0.capabilities.payload("input",8)==16 }
    try require(normal.count==1,"Expected one vendor endpoint for the connected OE921, found \(normal.count)")
    try require(normal[0].version==0x166,"Connected keyboard is not v1.66")
    return normal[0]
}
func checkDeviceError(_ report:[UInt8]) throws {
    if report.count>=2 && report[0]==0x5a && report[1]==0xa5 {
        throw FlashError.invalid("BOOT device error: \(hex(report))")
    }
}
func flash(_ image:Image,_ log:String) throws {
    let normal=try selectNormal(), trace=try Trace(log)
    trace.event("authorized_candidate",image.plan)
    trace.event("normal_identity",normal.json)
    emit(["stage":"identity_checked","device":normal.json,"sha256":image.sha])
    do {
        let session=try Session(normal,trace)
        // One reset request, then identify BOOT at the same physical USB location.
        emit(["stage":"entering_boot"])
        try session.send(image.reset)
        _=try? session.wait(1.0) { $0.first==0x0d }
    }
    var boot:Endpoint?
    let bootDeadline=Date().addingTimeInterval(20)
    while Date()<bootDeadline {
        let found=enumerate().filter { $0.vid==0x3554 && $0.pid==0xf808 &&
            $0.location==normal.location &&
            $0.capabilities.payload("output",6)==48 && $0.capabilities.payload("input",6)==48 }
        try require(found.count<=1,"Ambiguous BOOT endpoints")
        if let endpoint=found.first { boot=endpoint; break }
        pump(0.05)
    }
    guard let boot=boot else { throw FlashError.invalid("BOOT endpoint not found; no erase/data request sent") }
    trace.event("boot_identity",boot.json); emit(["stage":"boot_identified","device":boot.json])
    let session=try Session(boot,trace)
    var success=false
    func status(_ report:[UInt8]) throws -> Bool {
        try checkDeviceError(report)
        if report.count>=4 && report[0]==0x5b && report[1]==0xb5 {
            trace.event("boot_status",["state":report[2],"result":report[3]])
            if report[2]==0x88 { success=true }
            return (report[2]==1 || report[2]==2) && report[3]==1
        }
        return false
    }
    emit(["stage":"preparing_flash"])
    try session.send(image.prepare)
    let ready=try session.wait(30) { try status($0) }
    try require(ready && !success,"No successful erase/prepare status; stopping")
    for (index,frame) in image.packets.enumerated() {
        var acknowledged=false
        for retry in 0...8 {
            try session.send(frame)
            var mismatch=false
            let received=try session.wait(10) { report in
                _=try status(report)
                if report.first==0xb1 {
                    if report==Array(frame.dropFirst()) { return true }
                    mismatch=true; return true
                }
                return false
            }
            try require(received,"Data acknowledgement timeout at packet \(index)")
            if !mismatch { acknowledged=true; break }
            trace.event("echo_mismatch",["packet":index,"retry":retry])
        }
        try require(acknowledged,"Echo mismatch retry limit at packet \(index)")
        if index%128==0 || index==image.packets.count-1 {
            emit(["stage":"writing","acknowledged":index+1,"total":image.packets.count])
        }
    }
    if !success {
        _=try session.wait(30) { report in _=try status(report); return success }
    }
    try require(success,"All data echoed, but final device success status was not received")
    trace.event("device_reported_success"); emit(["stage":"device_reported_success"])
    let returnDeadline=Date().addingTimeInterval(20)
    while Date()<returnDeadline {
        let returned=enumerate().filter { $0.vid==normal.vid && $0.pid==normal.pid &&
            $0.location==normal.location && $0.version==0x166 }
        if let endpoint=returned.first {
            trace.event("normal_device_returned",endpoint.json)
            emit(["stage":"complete","deviceSuccess":true,"normalDeviceReturned":true,
                "sha256":image.sha,"version":"1.66","bluetoothIdleHardwareTested":false])
            return
        }
        pump(0.05)
    }
    throw FlashError.invalid("Device reported success but normal USB device did not return within 20s")
}
do {
    let arguments=Array(CommandLine.arguments.dropFirst())
    if arguments==["enumerate"] { emit(["devices":enumerate().map{$0.json},"transmitted":false]) }
    else if arguments.count==2 && arguments[0]=="probe" {
        let endpoint=try selectNormal(), trace=try Trace(arguments[1])
        do { let session=try Session(endpoint,trace); pump(0.05); _=session }
        emit(["stage":"access_probe_passed","device":endpoint.json,"transmitted":false])
    }
    else if arguments.count==2 && arguments[0]=="plan" {
        let image=try Image(arguments[1]); emit(image.plan)
    } else if arguments.count==3 && arguments[0]=="flash" {
        try flash(Image(arguments[1]),arguments[2])
    } else { throw FlashError.invalid("Usage: OE921Flash enumerate | plan IMAGE | flash IMAGE TRACE.jsonl") }
} catch {
    emit(["stage":"failed","error":String(describing:error)]); exit(1)
}
