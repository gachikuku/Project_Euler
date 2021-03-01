#!/usr/bin/env python3

"""
Largest palindrome product

Problem 4
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
"""

first_number = [i for i in range(0,1000)]
second_number = [j for j in range(0,1000)]
multiples = []
palindrome_numbers = []


for k in first_number: 
    
    for q in second_number:

        multiples.append(k*q)


def Reversed(n):

    rev = 0
    while n != 0:

        r = int(n%10)
        rev = rev*10 + r
        n = int(n/10)

    return rev


for x in multiples:
    if x == Reversed(x): palindrome_numbers.append(x)


print(max(palindrome_numbers))
