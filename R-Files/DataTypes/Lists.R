vtr1 = c(1,2,3,4,5,6)
vtr2 = c(1,2,3,4,5,9)

listValue = list(c(vtr1,vtr2))

print(listValue)

print(typeof(listValue))

list1 = list(1,2,3,"Hello",TRUE,10L,11+81i,13-2i,3.14141527)

print(list1)

print(length(list1))

mergerdList = merge(list1,listValue)

print(mergerdList)