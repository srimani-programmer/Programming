# Working with for loop in R

vtr = 1:100

for (val in vtr) {
  
  if(val %% 2==0){
    print(val)
  }
}

print("========ODD_NUMBERS==========")

for(val in vtr){
  if(val %% 2 != 0){
    print(val)
  }
}

