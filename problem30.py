import time
import math

start = time.time()



def ds(n: int) -> list:

    return [d for d in str(n)]


def dj(n: list) -> int:

    s = [str(i) for i in n]
    a_str = "".join(s)
    an_int = int(a_str)
    
    return an_int


limit = int((9**5)*6)
nums = [ds(i) for i in range(10,limit)]
result = []



for i in nums:
    if dj(i) < 100:
        if int(i[0])**5 + int(i[1])**5 == dj(i):
            result.append(dj(i))
    elif dj(i) < 1000: 
        if int(i[0])**5 + int(i[1])**5 + int(i[2])**5  == dj(i):
            result.append(dj(i))
    elif dj(i) < 10000: 
        if int(i[0])**5 + int(i[1])**5 + int(i[2])**5 + int(i[3])**5 == dj(i):
            result.append(dj(i))
    elif dj(i) < 100000: 
        if int(i[0])**5 + int(i[1])**5 + int(i[2])**5 + int(i[3])**5 + int(i[4])**5 == dj(i):
            result.append(dj(i))
    elif dj(i) < 1000000: 
        if int(i[0])**5 + int(i[1])**5 + int(i[2])**5 + int(i[3])**5 + int(i[4])**5 + int(i[5])**5 == dj(i):
            result.append(dj(i))
   


print(result,sum(result))


end = time.time()
print(abs(start-end))