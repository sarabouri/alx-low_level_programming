#!/bin/bash
wget -P /tmp https://github.com/sarabouri/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so
