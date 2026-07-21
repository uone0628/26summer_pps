#include <iostream>
#include <vector>

class Solution
{
public:
    int removeElement(std::vector<int> &nums, int val)
    {
        if (nums.empty())
            return 0;

        int *pCurrent = nums.data();
        int *pEnd = pCurrent + nums.size();
        int *pWrite = pCurrent;

        while (pCurrent < pEnd)
        {
            if (*pCurrent != val)
            {
                *pWrite = *pCurrent;
                pWrite++;
            }
            pCurrent++;
        }
        return (int)(pWrite - nums.data());
    }
};

int main()
{
    Solution sol;
    std::vector<int> nums = {3, 2, 2, 3};
    int len = sol.removeElement(nums, 3);
    std::cout << "Length: " << len << " | Array: ";
    for (int i = 0; i < len; ++i)
        std::cout << nums[i] << " ";
    std::cout << "\n";
    return 0;
}