#include <iostream>
#include <vector>

class Solution
{
public:
    int majorityElement(std::vector<int> &nums)
    {
        int element_count = 0;
        int current_candidate = 0;

        for (std::vector<int>::iterator it = nums.begin(); it != nums.end(); ++it)
        {
            if (element_count == 0)
            {
                current_candidate = *it;
            }
            element_count += (*it == current_candidate) ? 1 : -1;
        }
        return current_candidate;
    }
};

int main()
{
    Solution sol;
    std::vector<int> nums;
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(2);

    std::cout << "Result: " << sol.majorityElement(nums) << "\n";
    return 0;
}