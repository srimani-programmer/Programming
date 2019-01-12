# Identifiying even or odd between a range

initial,final = input('Enter the initial and final range value:').split(',')

initial = int(initial)
final = int(final)

for val in range(initial,final):
    if val % 2 == 0:
        print('{} is an even number'.format(val))
    else:print('{} is a odd number'.format(val))