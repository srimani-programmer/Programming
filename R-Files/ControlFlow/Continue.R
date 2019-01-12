# working with continue statement

vtr = 1:1000

for(i in vtr){
  if(i %% 2 == 0){
    break
  }else{
    print(i)
  }
}