#!/usr/bin/env python3
#-*- coding: utf-8 -*-

from datetime import datetime
from time import sleep


def log(message, when = datetime.now()):
    print('%s: %s' % (when, message))


def main():
    log('Hi there!')
    sleep(1)
    log('Hi again!')


main()
