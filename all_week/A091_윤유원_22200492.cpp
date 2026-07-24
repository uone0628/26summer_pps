#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int idx = 0;
        for (int n : nums)
        {
            if (n != val)
            {
                nums[idx++] = n;
            }
        }
        return idx;
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {3, 2, 2, 3};
    int len = sol.removeElement(nums, 3);
    cout << "Length: " << len << " | Array: ";
    for (int i = 0; i < len; ++i)
        cout << nums[i] << " ";
    cout << "\n";
    return 0;
}