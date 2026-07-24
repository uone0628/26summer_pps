import math

class Solution:
    def numPrimeArrangements(self, n: int) -> int:
        def is_prime(k):
            return k > 1 and all(k % i != 0 for i in range(2, int(k**0.5) + 1))
        
        primes = sum(1 for i in range(1, n + 1) if is_prime(i))
        return (math.factorial(primes) * math.factorial(n - primes)) % (10**9 + 7)