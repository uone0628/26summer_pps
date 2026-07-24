#include <iostream>
#include <cstdint>
class Solution
{
public:
    int hammingWeight(uint32_t n)
    {
        int c = 0;
        while (n)
        {
            n &= (n - 1);
            c++;
        }
        return c;
    }
};
int main()
{
    Solution s;
    std::cout << "Result: " << s.hammingWeight(11) << "\n";
    return 0;
}