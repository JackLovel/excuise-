#!/bin/bash

eval $@
if [ $? -eq 0 ];
then
    echo "$CMD exec success"
else
    echo "$CMD exec not success"
fi


