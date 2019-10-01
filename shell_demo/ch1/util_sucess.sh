#!/bin/bash
#持续执行，直到执行成功

function repeat()
{
    while true
    do
	$@ && return
    done
}

# ex1: repeat wget -c http://www.baidu.com
repeat wget -c http://www.baidu.com
