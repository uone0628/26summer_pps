#include <iostream>
using namespace std;

// LeetCode에서 제공하는 시스템 API 모의 구현
int target_number = 6;
int guess(int num)
{
    if (num > target_number)
        return -1;
    if (num < target_number)
        return 1;
    return 0;
}

class Solution
{
public:
    int guessNumber(int n)
    {
        int left = 1, right = n;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            int res = guess(mid);
            if (res == 0)
                return mid;
            if (res < 0)
                right = mid - 1;
            else
                left = mid + 1;
        }
        return -1;
    }
};

int main()
{
    Solution sol;
    cout << "Result: " << sol.guessNumber(10) << "\n";
    return 0;
}