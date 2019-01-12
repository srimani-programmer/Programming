mealCost = float(input())

tip = int(input())

tax = int(input())

tip = mealCost * (tip/100)

tax = mealCost * (tax/100)

print(mealCost + tip + tax)