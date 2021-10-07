import math


def countDigits(n) -> int:
    
    return math.floor(math.log10(n)+1)
    
    
def F(n) -> int:

    a = 0
    
    b = 1

    if (n == 0): return a
    
    for i in range(2,n+1):
    
        c = a + b
        
        a = b
        
        b = c
        
    return b


c = 1

while True:

    print(c, F(c))

    if countDigits(F(c)) == 1000:
        
        print(c, F(c))
        
        break
        
    c += 1