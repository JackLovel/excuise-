path = r'./my_file.txt'

value = [len(x) for x in open(path)]
print(value)

# generator
it = (len(x) for x in open(path))
print(next(it))
print(next(it))

roots = ((x, x**0.5) for x in it)
