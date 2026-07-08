#include <vector>

using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int result = 0;

        // 비트 XOR 연산 활용: A ^ A = 0, A ^ 0 = A 성질 이용
        for (int num : nums)
        {
            result ^= num;
        }

        return result;
    }
};