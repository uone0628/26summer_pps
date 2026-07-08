#include <vector>
#include <string>

using namespace std;

class Solution
{
public:
    vector<string> summaryRanges(vector<int> &nums)
    {
        vector<string> result;
        if (nums.empty())
            return result;

        int start = nums[0];

        // 단일 for문으로 직관적인 처리
        for (int i = 0; i < nums.size(); ++i)
        {
            // 마지막 원소이거나, 다음 원소가 연속되지 않을 때 구간 완성
            if (i == nums.size() - 1 || nums[i] + 1 != nums[i + 1])
            {
                if (start == nums[i])
                {
                    result.push_back(to_string(start));
                }
                else
                {
                    result.push_back(to_string(start) + "->" + to_string(nums[i]));
                }
                // 다음 구간의 시작점 갱신
                if (i != nums.size() - 1)
                {
                    start = nums[i + 1];
                }
            }
        }
        return result;
    }
};