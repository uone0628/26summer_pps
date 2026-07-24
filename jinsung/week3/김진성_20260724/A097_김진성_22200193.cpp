#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        unordered_map<int, int> seen;
        for (int i = 0; i < numbers.size(); ++i)
        {
            int complement = target - numbers[i];
            if (seen.count(complement))
            {
                // 원본 문제의 요구사항이 1-based index라고 가정
                return {seen[complement], i + 1};
            }
            seen[numbers[i]] = i + 1;
        }
        return {};
    }
};

int main()
{
    Solution sol;
    vector<int> numbers = {2, 7, 11, 15};
    vector<int> res = sol.twoSum(numbers, 9);
    if (!res.empty())
    {
        cout << "Result: [" << res[0] << ", " << res[1] << "]\n";
    }
    return 0;
}