# Based on age giving guidance to the people

age = eval(input('Enter your age:'))

if age < 5:print('Too young...! wait until you reach {} years'.format(age + (5-age)))
elif age == 5:print('go to kindergarten')
elif age >= 6 and age <= 17:print('Goes to grade 1 to 12')
else:print('Go to College')