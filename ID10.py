#!/usr/bin/env python3

"""
Summation of primes

Problem 10
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
"""

#Code taken from stackoverflow, by 'bjb568' "This is the best algorithm I could come up.'
def get_primes(n):


    #range(start, stop, step)
    numbers = set(range(n, 1, -1))
    print(numbers)
    primes = []
    print(primes)

    while numbers:

        p = numbers.pop()
        print(p)
        primes.append(p)
        print(primes)
        result = numbers.difference_update(set(range(p*2, n+1, p)))
        print(result)


    return primes


print(get_primes(10))
