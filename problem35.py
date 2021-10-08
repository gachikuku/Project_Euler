n = 100
prime = [True for i in range(n + 1)]
p = 2
while (p * p <= n):

    # If prime[p] is not changed, then it is a prime
    if (prime[p] == True):

        # Update all multiples of p
        for i in range(p ** 2, n + 1, p):
            prime[i] = False
    p += 1
prime[0]= False
prime[1]= False
# Print all prime numbers
for p in range(n + 1):
    if prime[p]: prime.append(p)

def Reversed(n):

    rev = 0
    while n != 0:

        r = int(n%10)
        rev = rev*10 + r
        n = int(n/10)

    return rev


circular = []

for x in prime:

    if Reversed(x)%2 != 0: circular.append(x)


#print(primes)
#print(circular)

print(prime)
