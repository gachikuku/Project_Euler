#!/usr/bin/env python3 

"""
Largest prime factor

Problem 3
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
"""


target = 600851475143
#Note an arbitary number is used for the limit
limit = 10000
primes = []
answer = []


for num in range(1, limit+1):
    if num > 1:
        for i in range(2, (num//2)+1):
            if num%i == 0:
                break
        else: primes.append(num)


for j in primes:
    if target%j == 0: answer.append(j)

print(max(answer))
