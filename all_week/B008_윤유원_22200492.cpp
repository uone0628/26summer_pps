#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int left = 0, right = nums.size() - 1;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target)
                return mid;
            if (nums[mid] < target)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return left;
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {1, 3, 5, 6};
    cout << "Result: " << sol.searchInsert(nums, 5) << "\n"; // 2
    cout << "Result: " << sol.searchInsert(nums, 2) << "\n"; // 1
    return 0;
}