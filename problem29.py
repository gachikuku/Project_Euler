A = []

for i in range(2, 101):
 
    for j in range(2, 101):
    
        A.append(i**j)
        
        
        
print(len(sorted(set(A))))