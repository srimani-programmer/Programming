operation = "Mull"

val1 = 15
val2 = 7

switch (operation,
  "add" = print(val1 + val2),
  "sub" = print(val2 - val1),
  "Mul" = print(val2 * val1),
  "div" = print(val2 /val1),
  "Mod" = print(val1 %% val2),
   print("Invalid Operation")
)
