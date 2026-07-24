#include <iostream>
using namespace std;

class Solution
{
private:
    bool isPrime(int n)
    {
        if (n <= 1)
            return false;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
                return false;
        }
        return true;
    }

public:
    int numPrimeArrangements(int n)
    {
        int primeCount = 0;
        for (int i = 1; i <= n; i++)
        {
            if (isPrime(i))
                primeCount++;
        }

        long long MOD = 1e9 + 7;
        auto factorial = [&](int num)
        {
            long long res = 1;
            for (int i = 2; i <= num; i++)
            {
                res = (res * i) % MOD;
            }
            return res;
        };

        return (factorial(primeCount) * factorial(n - primeCount)) % MOD;
    }
};

int main()
{
    Solution sol;
    cout << "Result: " << sol.numPrimeArrangements(5) << "\n";
    return 0;
}