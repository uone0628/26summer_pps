#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        int left = 0, right = numbers.size() - 1;
        while (left < right)
        {
            int sum = numbers[left] + numbers[right];
            if (sum == target)
                return {left + 1, right + 1};
            if (sum < target)
                left++;
            else
                right--;
        }
        return {};
    }
};

int main()
{
    Solution sol;
    vector<int> numbers = {2, 7, 11, 15};
    vector<int> res = sol.twoSum(numbers, 9);
    cout << "Result: [" << res[0] << ", " << res[1] << "]\n";
    return 0;
}