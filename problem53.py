import math


def nCr(pair):
 
    return int((math.factorial(pair[0]))/(math.factorial(pair[0]-pair[1])*math.factorial(pair[1])))



pairs = [[n, r] for n in range(1,101) for r in range(n)] 


values = [i for i in pairs if nCr(i) > 1000000]


print(len(values))