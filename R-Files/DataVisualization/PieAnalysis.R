comapany = c("Hp","Dell","Mac Book Air","Mac Book pro","Asus","Toshiba","Lenovo"
             ,"Samsung","Microsft Surface pro","iball")
productSellingPercenatge = c(29.387,27.21,4.3,5.1,25.91,9.87,19,13.56,14,6)

pie(productSellingPercenatge,comapany, col = rainbow(length(productSellingPercenatge)))