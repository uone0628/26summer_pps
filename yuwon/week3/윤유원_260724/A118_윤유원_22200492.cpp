#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int idx = 0;
        for (int n : nums)
        {
            if (n != 0)
                nums[idx++] = n;
        }
        while (idx < nums.size())
        {
            nums[idx++] = 0;
        }
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {0, 1, 0, 3, 12};
    sol.moveZeroes(nums);
    cout << "Result: ";
    for (int n : nums)
        cout << n << " ";
    cout << "\n";
    return 0;
}