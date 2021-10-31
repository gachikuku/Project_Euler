def isPalindrome(n: int) -> bool:

    if str(n) == str(n)[::-1]: return True
    
    else: return False
    


def b2(n: int) -> str:

    b= []
    
    while(n>0):
    
        d=n%2
        
        b.append(str(d))
        
        n=n//2
        
    b.reverse()
    
    s = "".join(b)
    
    return  s
    
    
    

anses = []

for i in range(1,1000000,2):

    if isPalindrome(i) and b2(i)==b2(i)[::-1]:
    
        anses.append(i)
        
        
print(sum(anses))
print(*anses)