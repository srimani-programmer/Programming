# Working with arrays

vtr1 = c(1,2,3,4,5,6,7,8,9)
vtr2 = c(11,2,33,45,17,19,12,18)

arr1 = array(c(vtr1,vtr2),dim = c(5,5))
arr2 = array(c(vtr1,vtr2),dim = c(5,5))

print(arr1)
print(arr2)
print(arr1 + arr2)