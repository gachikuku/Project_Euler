def digit_sum(n: int) -> int:

    return sum([int(i) for i in str(n)])


max_d_s = 0


for a in range(100):
    
    for b in range(100):

        if digit_sum(a**b) > max_d_s:
        
            max_d_s = digit_sum(a**b)
    
    
print(max_d_s)