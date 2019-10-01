#!/bin/bash

function fname()
{
    echo $0, $1, $2;
    echo "$@";
    return 0;
}

fname 1 2
