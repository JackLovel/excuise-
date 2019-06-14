#!/bin/bash
# test-file:

test_file() {
FILE=~/.bashrc
if [ -e "$FILE" ]; then
    if [ -f "$FILE" ]; then
       echo "$FILE is a regular file"
    fi

    if [ -d "$FILE" ]; then
       echo "$FILE is directory."
    fi

    if [ -f "$FILE" ]; then
       echo "$FILE is a regular file"
    fi

    if [ -w "$FILE" ]; then
       echo "$FILE is a writable file"
    fi
    
    if [ -x "$FILE" ]; then
       echo "$FILE is a executable file"
    fi
else
    echo "$FILE does not exist"
    return 1
fi
}

test_file