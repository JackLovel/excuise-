#!/bin/bash
# test-string

INT=-5
if [[ "$INT" =~ ^-?[0-9]+$ ]]; then
    if [ INT == 0 ]; then
        echo "INT is zero."
    else
        if  ((INT < 0 )); then
            echo "INT is negative."
        else
            echo "INT is negative."
        fi

        if  (( ((INT % 2)) == 0 )); then
            echo "INT is even."
        else
            echo "INT is old."
        fi
    fi
else
    echo "INT is not integer." >&2
    exit 1
fi
