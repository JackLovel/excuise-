#!/usr/bin/env python3
#-*- coding: utf-8 -*-


def remainder(number, divisor):
    return number % divisor


def flow_rate(weight_diff, time_diff, period = 1, units_per_kg = 1):
    return ((weight_diff * units_per_kg) / time_diff) * period

def main():
    assert remainder(20, 7) == 6
    #remainder(number=20, 7)
    #remainder(7, number=20)

    weight_diff, time_diff = 0.5, 3
    flow_per_second = flow_rate(weight_diff, time_diff)
    flow_per_hour = flow_rate(weight_diff, time_diff, period = 36000)
    print('%.3f kg per second' % flow_per_second)
    print('%.3f kg per hour' % flow_per_hour)

    pounds_per_hour = flow_rate(weight_diff, time_diff, period = 3600, units_per_kg = 2.2)
    print('%.3f kg per hour' % pounds_per_hour)


main()


