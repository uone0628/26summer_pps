#include <iostream>
#include <vector>

class Solution
{
public:
    void merge(std::vector<int> &nums1, int m, std::vector<int> &nums2, int n)
    {
        int p1 = m - 1;
        int p2 = n - 1;
        int p = m + n - 1;
        while (p1 >= 0 && p2 >= 0)
        {
            if (nums1[p1] > nums2[p2])
            {
                nums1[p--] = nums1[p1--];
            }
            else
            {
                nums1[p--] = nums2[p2--];
            }
        }
        while (p2 >= 0)
        {
            nums1[p--] = nums2[p2--];
        }
    }
}

int
main()
{
    Solution sol;
    std::vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    std::vector<int> nums2 = {2, 5, 6};
    sol.merge(nums1, 3, nums2, 3);
    std::cout << "Result: ";
    for (int n : nums1)
        std::cout << n << " ";
    std::cout << "\n";
    return 0;
}