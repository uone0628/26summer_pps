#include <iostream>
#include <cstdint>
using namespace std;

class Solution
{
public:
    int hammingWeight(uint32_t n)
    {
        int count = 0;
        while (n)
        {
            n &= (n - 1);
            count++;
        }
        return count;
    }
};

int main()
{
    Solution sol;
    cout << "Result: " << sol.hammingWeight(11) << "\n"; // 1011 in binary -> 3
    return 0;
}