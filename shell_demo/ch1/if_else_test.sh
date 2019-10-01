#!/bin/bash
#用途：演示 if-else用法

fpath="/etc/passwd"
if [ -e $fpath ]; then
    echo File exists;
else
    echo File not exists;
fi

