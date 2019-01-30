names = ['Cecilia', 'List', 'Marie']
letters = [len(n) for n in names]

longest_name = None
max_letters = 0

for name, count in zip(names, letters):
   count = letters[i]
   if count > max_letters:
       longest_name = name
       max_letters = count

# print(letters)
print(longest_name)
