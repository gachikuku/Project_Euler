x = eval("[" + open("words.txt").readlines()[0] + "]")



def tri(n) -> bool:

    suma = 0

    if n < 0: return False
    
    for i in range(1,n+1):
    
        suma += i
        
        if suma == n: return True
        
    return False
    


total = 0

for i in x:

    word_sum = 0
    
    for j in i:
    
        word_sum += ord(j) - 64
        
    if tri(word_sum): total += 1
    
    
    
print(total)