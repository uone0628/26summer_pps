#include <iostream>
#include <vector>
using namespace std;

#define SZ(x) ((int)(x).size())
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        if (!SZ(nums))
            return 0;
        int idx = 1;
        FOR(i, 1, SZ(nums))
        {
            if (nums[i] != nums[i - 1])
                nums[idx++] = nums[i];
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
    FOR(i, 0, len)
        cout << nums[i] << " ";
    cout << "\n";
    return 0;
}