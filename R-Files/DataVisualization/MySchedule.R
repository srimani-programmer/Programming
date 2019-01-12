work = c('Sleeping','Studying','Eating','Playing','Chatting')
percentage = c(14,36,9,31,10)

pie(percentage,work,title('My Schedule'))
#pie(percentage,work,col = rainbow(length(work)))