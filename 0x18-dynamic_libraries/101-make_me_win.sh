#!/bin/bash
wget -P /tmp https://github.com/yohannes-y/alx-low_level_programming/0x18-dynamic_libraries/injectcode.so
export LD_PRELOAD=/tmp/injectcode.so
