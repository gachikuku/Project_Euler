#!/usr/bin/env python3

"""
Smallest multiple

Problem 5
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
"""


numbers = [i for i in range(1,2**28)]
multiples = []


for number in numbers:

    if all(number%j == 0 for j in range(1,21)): multiples.append(number)


print(min(multiples))
