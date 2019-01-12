# Working with the vectors...!

# vector is a basic data structure in R lang. it can be created by using c()
# c() --> concatination function.. and the elements present in it are components

vectorVar = c(10,20,30,40,50)

print(vectorVar)

# If we take multiple values in a single vector then all the values in a vector are consider to be character


vectorGroup = c(c(10,20,30.5),c(2+3i),c("sri","Mani","kanta","palakollu"),
               c('A','B','C'))

print(vectorGroup)

# to know the type of the vector
print(typeof(vectorGroup))

print(typeof(vectorGroup))

# To know the class of the vector

print(class(vectorVar))

print(class(vectorGroup))

complexVector = c(2+3i,4-7i,11-17i,c(10,20,30,40))

# Working with complex data type
print(complexVector)

print(typeof(complexVector))

print(class(complexVector))

# Working with decimal values i.e double datatype

decimalVector = c(10.21,-33.422,39.32,0.300021,-0.000032)

print(decimalVector)

print(typeof(decimalVector))

print(class(decimalVector))




