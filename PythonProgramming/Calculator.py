# Creating a Calculator

num1,operator,num2 = input('Enter your Operation: ')

# Converting String to integer

num1 = int(num1)
num2 = int(num2)

if operator == '+':
    print('{} + {} = {}'.format(num1,num2,num1 + num2))
elif operator == '-':
    print('{} - {} = {}'.format(num1, num2, num1 - num2))
elif operator == '*':
    print('{} * {} = {}'.format(num1, num2, num1 * num2))
elif operator == '/':
    print('{} / {} = {}'.format(num1, num2, num1 / num2))
elif operator == '%':
    print('{} % {} = {}'.format(num1, num2, num1 % num2))
elif operator == '**':
    print('{} ** {} = {}'.format(num1, num2, num1 ** num2))
else:print('use only basic operators like +,-,*,/,%,**.')


