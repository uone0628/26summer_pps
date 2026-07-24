#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int findShortestSubArray(vector<int> &nums)
    {
        unordered_map<int, int> count, first, last;
        int max_degree = 0;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (!first.count(nums[i]))
                first[nums[i]] = i;
            last[nums[i]] = i;
            count[nums[i]]++;
            max_degree = max(max_degree, count[nums[i]]);
        }

        int min_len = nums.size();
        for (auto const &[num, freq] : count)
        {
            if (freq == max_degree)
            {
                min_len = min(min_len, last[num] - first[num] + 1);
            }
        }
        return min_len;
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {1, 2, 2, 3, 1};
    cout << "Result: " << sol.findShortestSubArray(nums) << "\n";
    return 0;
}