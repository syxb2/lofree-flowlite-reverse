#!/usr/bin/env python3
"""只解析已保存的官方文本；不执行厂商 JS、不联网、不访问 HID。"""

import hashlib
import json
from pathlib import Path
import re


ROOT = Path(__file__).resolve().parents[1]
SOURCES = ROOT / "research" / "official-web"
URLS = {
    "index-BTVblIUr.js": "https://www.lofree.tech/home/assets/index-BTVblIUr.js",
    "cfg.json": "https://www.lofree.tech/home/cfg.json",
    "keyboard.html": "https://www.lofree.tech/keyboard/",
    "keyboard-index-C3SCpSMc.js": "https://www.lofree.tech/keyboard/assets/index-C3SCpSMc.js",
    "keyboard-cfg.json": "https://www.lofree.tech/keyboard/cfg.json",
    "keyboard-zh-CN.json": "https://www.lofree.tech/keyboard/lang/zh-CN.json",
    "keyboard-en.json": "https://www.lofree.tech/keyboard/lang/en.json",
}


def required_match(pattern, source):
    match = re.search(pattern, source)
    if match is None:
        raise ValueError(f"源码结构不符合预期，停止提取：{pattern}")
    return match


def numeric_map(pattern, source):
    body = required_match(pattern, source).group(1)
    pairs = re.findall(r"([A-Za-z_][A-Za-z_0-9]*):(\d+)", body)
    if ",".join(f"{key}:{value}" for key, value in pairs) != body:
        raise ValueError("只接受纯数字地址表，不执行 JavaScript 表达式")
    return {key: int(value) for key, value in pairs}


def evidence(source, marker, context=170):
    offset = source.index(marker)
    return {
        "marker": marker,
        "character_offset": offset,
        "snippet": source[max(0, offset - context):offset + len(marker) + context],
    }


def main():
    source = (SOURCES / "keyboard-index-C3SCpSMc.js").read_text()
    cfg = json.loads((SOURCES / "keyboard-cfg.json").read_text())
    home_cfg = json.loads((SOURCES / "cfg.json").read_text())
    zh = json.loads((SOURCES / "keyboard-zh-CN.json").read_text())
    en = json.loads((SOURCES / "keyboard-en.json").read_text())
    keyboard_map = numeric_map(r"Pe=\{([^{}]+)\}", source)
    mouse_map = numeric_map(r"Ve=\{([^{}]+)\}", source)
    commands = numeric_map(r"tt=\{(EncryptionData:1,[^{}]+)\}", source)

    def model(config):
        family = next(item for item in config["keyboard"] if item["cid"] == 1)
        return next(item for item in family["cfg"] if item["mid"] == 1)

    oe921 = model(cfg)
    special = next(item for item in zh["keyboard"]["keyboardKeyfunctions"]
                   if item["type"] == "0x05")["children"]
    result = {
        "audit_date": "2026-10-24",
        "scope": "OE921 / v1.66；官方网页客户端静态配置分析",
        "device_commands_sent": False,
        "device_config_changed": False,
        "firmware_downloaded_or_changed": False,
        "keyboard_config_version": cfg["version"],
        "oe921_metadata": {
            "cid": 1, "mid": 1,
            "identity_basis": "官方型号表；未对实物发送身份查询",
            "schema_keys": list(oe921),
            "default_off_time": oe921["lightEffect"]["offTime"],
            "upgrade_metadata": oe921["upgrade"],
            "home_upgrade_metadata": model(home_cfg)["upgrade"],
        },
        "keyboard_address_map": keyboard_map,
        "mouse_sleep_address": mouse_map["SleepTime"],
        "device_commands": commands,
        "keyboard_setter_exports": sorted(set(re.findall(r"Set_KB_[A-Za-z0-9_]+", source))),
        "ui_labels": {"zh-CN": zh["keyboard"]["SleepTime"], "en": en["keyboard"]["SleepTime"]},
        "off_time_options": zh["LightOffTimeOptions"],
        "special_key_actions": special,
        "evidence": [evidence(source, marker) for marker in [
            'de.$t("keyboard.SleepTime")',
            "async function H(de){await Ee.Set_KB_OffLightTime(de)",
            "Set_KB_OffLightTime:oy",
            "async function oy(e)",
            "L.keyboard.lightEffect.offTime=be[Pe.OffLightTime]",
            "async function y5(e)",
            "async function Ug(e)",
            "function Iy(e){fa=e}",
            "Ee.Set_DriverOnline(D.driverOnline)",
        ]],
        "sources": [{
            "file": name, "url": url,
            "bytes": (SOURCES / name).stat().st_size,
            "sha256": hashlib.sha256((SOURCES / name).read_bytes()).hexdigest(),
        } for name, url in URLS.items()],
        "conclusion": "本次检查的官方客户端中未发现独立的键盘蓝牙休眠参数；不能据此证明固件内部不存在该参数。",
    }
    print(json.dumps(result, ensure_ascii=False, indent=2))


if __name__ == "__main__":
    main()
