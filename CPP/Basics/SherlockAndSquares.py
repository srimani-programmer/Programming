#python3 solution: Count all the integers in the range [sqrt(a), sqrt(b)]

import math
t = int(input())
for _ in range(t):
    a, b = input().strip().split(' ')
    a = int(a)
    b = int(b)
    
    sqrtA = math.ceil(math.sqrt(a))
    sqrtB = math.floor(math.sqrt(b))
    
    print(sqrtB - sqrtA + 1)