# Working with ifelse statement

marks = 75

if(marks >= 90 & marks <100){
  print("GRADE - O")
}else if(marks <90 & marks >=80){
  print("GRADE - A+")
}else if(marks >= 70 & marks <80){
  print("GRADE - A")
}else if(marks>=60 && marks < 70){
  print("GRADE - B")
}else if(marks >= 50 & marks < 60){
  print("GRADE - C")
}else{
  print("FAIL")
}