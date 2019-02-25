#!/usr/bin/env python3
#-*- coding: utf-8 -*-

import json


def decode(data, default=None):
    """Load JSON data from a string

    Args:
        data: JSON data to decode
        default: Value to return if decoding fails
                 Defaults to an empty dictonary.
    """
    if default is None:
        default = {}
    try:
        return json.loads(data)
    except ValueError:
        return default

    
def main():
    foo = decode('bad data')
    foo['stuff'] = 5

    bar = decode('also bad')
    bar['meep'] = 1

    print('Foo:', foo)
    print('Bar:', bar)
    

main()
