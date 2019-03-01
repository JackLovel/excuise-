#!/usr/bin/python3
#-*- coding:utf-8 -*-


current = {'green': 12, 'blue': 3}

increments = [
    ('red', 5),
    ('blue', 17),
    ('orange', 9)
]

def log_missing():
    print('Key added')
    return 0


result = defaultdict(log_missing, current)
print('Before:', dict(result))
for key, amount in increments:
    result[key] += amount

print('After: ', dict(result))