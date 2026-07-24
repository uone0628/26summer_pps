#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

struct ElementInfo
{
    int count = 0;
    int first_idx = -1;
    int last_idx = -1;
};

class Solution
{
public:
    int findShortestSubArray(vector<int> &nums)
    {
        unordered_map<int, ElementInfo> infoMap;
        int max_degree = 0;
        int min_len = nums.size();

        for (int i = 0; i < nums.size(); ++i)
        {
            int num = nums[i];
            if (infoMap[num].count == 0)
            {
                infoMap[num].first_idx = i;
            }
            infoMap[num].last_idx = i;
            infoMap[num].count++;

            // max_degree를 실시간으로 업데이트
            if (infoMap[num].count > max_degree)
            {
                max_degree = infoMap[num].count;
                min_len = infoMap[num].last_idx - infoMap[num].first_idx + 1;
            }
            else if (infoMap[num].count == max_degree)
            {
                min_len = min(min_len, infoMap[num].last_idx - infoMap[num].first_idx + 1);
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