# Working with vectors

# 5 Atomic data types are present in it

a = 10 # Numeric

b = 10L # Integer

c = "SriManikanta" # Character

d = 3+11i  # Complex

e = TRUE  # Logical

vtr1 = c(1,5,2,3,11,17,98,34)

print(vtr1)

# To sort a vector

sortedvtr = sort(vtr1)

print(sortedvtr)

# To print a vector in a range of numbers

print(vtr1[2:8])

print(vtr1[4:11]) # For out of range

print(vtr1[-3])

# Adding elements to the vector directly

vtr1[9] = 21

print(vtr1)

# to know the length of the vector

print

vtr2 = 1:3

vtr3 = 4:7

arr = array(c(vtr2,vtr3),dim = c(3, 3, 2))