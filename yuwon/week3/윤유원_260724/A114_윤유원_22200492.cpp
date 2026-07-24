#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int numPrimeArrangements(int n)
    {
        int count = 0;
        vector<bool> isPrime(n + 1, true);
        for (int p = 2; p * p <= n; p++)
        {
            if (isPrime[p])
            {
                for (int i = p * p; i <= n; i += p)
                    isPrime[i] = false;
            }
        }
        for (int p = 2; p <= n; p++)
        {
            if (isPrime[p])
                count++;
        }

        long long res = 1;
        long long MOD = 1e9 + 7;
        for (int i = 1; i <= count; i++)
            res = (res * i) % MOD;
        for (int i = 1; i <= n - count; i++)
            res = (res * i) % MOD;
        return res;
    }
};

int main()
{
    Solution sol;
    cout << "Result: " << sol.numPrimeArrangements(5) << "\n";
    return 0;
}