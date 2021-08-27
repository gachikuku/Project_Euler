#!/usr/bin/env python3

import numpy as np
import math

"""
Special Pythagorean triplet

Problem 9
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a2 + b2 = c2
For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
"""


# The simple, yet right approach.

def solution(n):

    for b in range(n):
        for a in range(1,b):

            c = math.sqrt(a**2 + b**2)

            #checks if 'c' is integer if sum of integers is a thousand.
            if c%1 == 0 and a + b + c == 1000: return int(a*b*c)



print(solution(1000000))



# The complicated, and mathematically wrong approach.

#threes = [i*3 for i in range(1,100)]
#fours = [j*4 for j in range(1,100)]
#fives = [k*5 for k in range(1,100)]
#
#
#
#for n, i, j, k in zip(range(1,100),threes, fours, fives):
#    total = i + j + k
#    print(n,".",i,j,k, " = ", total)
#
#
#
##summation = [threes, fours, fives]
##summation = sum(map(np.array, summation))


