#include <vector>
using namespace std;

class Solution
{
public:
    // 판별 로직을 별도 함수로 모듈화
    bool isSelfDividing(int n)
    {
        int temp = n;
        while (temp > 0)
        {
            int digit = temp % 10;
            if (digit == 0 || n % digit != 0)
            {
                return false;
            }
            temp /= 10;
        }
        return true;
    }

    vector<int> selfDividingNumbers(int left, int right)
    {
        vector<int> result;
        for (int i = left; i <= right; ++i)
        {
            if (isSelfDividing(i))
            {
                result.push_back(i);
            }
        }
        return result;
    }
};