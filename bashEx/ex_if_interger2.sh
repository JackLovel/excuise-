#!/bin/bash
# test-string

INT=-5
if [[ "$INT" =~ ^-?[0-9]+$ ]]; then
    if [ $INT -eq 0 ]; then
        echo "INT is zero."
    else
        if [ $INT -lt 0 ]; then
            echo "INT is negative."
        else
            echo "INT is negative."
        fi

        if [ $((INT % 2)) -eq 0 ]; then
            echo "INT is even."
        else
            echo "INT is old."
        fi
    fi
else
    echo "INT is not integer." >&2
    exit 1
fi
