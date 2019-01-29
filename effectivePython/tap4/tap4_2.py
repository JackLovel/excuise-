from urllib.parse import parse_qs


my_values = parse_qs('red=5&blue=0&green=',
                     keep_blank_values=True)

def get_first_int(values, key, default=0):
    found = values.get(key, [''])
    if found[0]:
        found = int(found[0])
    else:
        found = default
    return found
        

green = get_first_int(my_values, 'green')
red = get_first_int(my_values, 'red')
opacity = get_first_int(my_values, 'opacity')

print('Red: %r' % red);
print('Green: %r' % green)
print('Opacity %r' % opacity)




