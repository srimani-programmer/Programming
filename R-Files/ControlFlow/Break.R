# Working with Break statement

vtr = 1:25

for(i in vtr){
  i = i ^ 2
  print(i)
  if(i == 256){
    break
  }
}