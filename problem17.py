import inflect


def without(s: str) -> str:

    x = s.replace(" ", "")
    
    return x.replace("-","")
    


p = inflect.engine()


res = 0

for i in range(1,1000+1):
    
    res +=len(without(p.number_to_words(i))) 
    
print(res)

