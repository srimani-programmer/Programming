# Creating a interest calculator

money,interest = input('Enter the money and interest:').split()

money = int(money)
interest = float(interest)

print('Enter the no of years')

years = int(input())

for i in range(years):
    money = money + (money * interest)

print('total amount after {} years is {:.2f}'.format(years,money))
