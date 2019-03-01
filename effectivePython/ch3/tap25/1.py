#!/usr/bin/python3
#-*- coding: utf-8 -*-


class MyBaseClass(object):
    def __init__(self, value):
        self.value = value


class MyClidClass(MyBaseClass):
    def __init__(self):
        MyBaseClass.__init__(self, 5)

    def times_two(self):
        return self.value * 2


foo = MyClidClass()
print(foo.times_two())


class TimesTwo:
    def __init__(self):
        self.value *= 2


class PlueFive:
    def __init__(self):
        self.value += 5


class OneWay(MyBaseClass, TimesTwo, PlueFive):
    def __init__(self, value):
        MyBaseClass.__init__(self, value)
        TimesTwo.__init__(self)
        PlueFive.__init__(self)


foo = OneWay(5)
print('First ordering is (5 * 2) + 5 = ', foo.value)


# Example 5
class AnotherWay(MyBaseClass, PlueFive, TimesTwo):
    def __init__(self, value):
        MyBaseClass.__init__(self, value)
        TimesTwo.__init__(self)
        PlueFive.__init__(self)


bar = AnotherWay(5)
print('Second ordering still is', bar.value)


# Exmaple 6
class TimesFiveCorrect(MyBaseClass):
    def __init__(self, value):
        super(TimesFiveCorrect, self).__init__(value)
        self