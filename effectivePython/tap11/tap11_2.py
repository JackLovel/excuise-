names = ['Cecilia', 'List', 'Marie']
letters = [len(n) for n in names]

longest_name = None
max_letters = 0

for i, name in enumerate(names):
   count = letters[i]
   if count > max_letters:
       longest_name = names[i]
       max_letters = count

# print(letters)
print(longest_name)
