#-*- coding: utf-8 -*-


d = {"中国":"北京", "美国":"华盛顿", "法国":"巴黎"}


print("中国" in d)
print(d.keys())
print(d.values())

print(d.get("中国", "伊斯兰堡"))
print(d.get("巴勒斯坦", "伊斯兰堡"))
print(d.popitem())

