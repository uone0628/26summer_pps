#include <iostream>
using namespace std;

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
private:
    int bSearch(int left, int right)
    {
        if (left > right)
            return -1;

        int mid = left + (right - left) / 2;
        int res = guess(mid);

        if (res == 0)
            return mid;
        if (res < 0)
            return bSearch(left, mid - 1);
        return bSearch(mid + 1, right);
    }

public:
    int guessNumber(int n)
    {
        return bSearch(1, n);
    }
};

int main()
{
    Solution sol;
    cout << "Result: " << sol.guessNumber(10) << "\n";
    return 0;
}