word_list = eval("[" + open("words.txt").readlines()[0] + "]")



def isTri(n) -> bool:

    suma = 0

    if n < 0: return False
    
    for i in range(1,n+1):
    
        suma += i
        
        if suma == n: return True
        
    return False
    


total = 0

for word in word_list:

    word_sum = 0
    
    for letter in word:
    
        word_sum += ord(letter) - 64
        
    if isTri(word_sum): total += 1
    
    
    
print(total)