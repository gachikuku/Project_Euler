#!/usr/bin/env python3

"""
10001st prime

Problem 7
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
"""

primes = []

for num in range(1, 150000):

    if num > 1:

        for i in range(2, (num//2)+1):

            if num%i == 0: break

        else: primes.append(num)



print(list(enumerate(primes, 1)))
