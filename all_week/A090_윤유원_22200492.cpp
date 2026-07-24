#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        if (nums.empty())
            return 0;
        int idx = 1;
        for (int i = 1; i < nums.size(); ++i)
        {
            if (nums[i] != nums[i - 1])
            {
                nums[idx++] = nums[i];
            }
        }
        return idx;
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {1, 1, 2};
    int len = sol.removeDuplicates(nums);
    cout << "Length: " << len << " | Array: ";
    for (int i = 0; i < len; ++i)
        cout << nums[i] << " ";
    cout << "\n";
    return 0;
}