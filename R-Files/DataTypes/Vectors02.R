vtr1 <- c(1,2,3,4,5,6)

names(vtr1)  <- c("Monday","Tues","wed","thur","Fri","sat")

print(vtr1)

total_sum = sum(vtr1)

print(total_sum)

# Poker and roulette winnings from Monday to Friday:
poker_vector <- c(140, -50, 20, -120, 240)
roulette_vector <- c(-24, -50, 100, -350, 10)
days_vector <- c("Monday", "Tuesday", "Wednesday", "Thursday", "Friday")
names(poker_vector) <- days_vector
names(roulette_vector) <- days_vector

# Which days did you make money on poker?
selection_vector <- poker_vector > 0
print(selection_vector)

# Select from poker_vector these days
poker_winning_days <-  poker_vector[selection_vector]

print(poker_winning_days)