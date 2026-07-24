#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int p1 = m - 1, p2 = n - 1, p = m + n - 1;
        while (p1 >= 0 && p2 >= 0)
        {
            if (nums1[p1] > nums2[p2])
                nums1[p--] = nums1[p1--];
            else
                nums1[p--] = nums2[p2--];
        }
        while (p2 >= 0)
            nums1[p--] = nums2[p2--];
    }
};

int main()
{
    Solution sol;
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    sol.merge(nums1, 3, nums2, 3);
    cout << "Result: ";
    for (int n : nums1)
        cout << n << " ";
    cout << "\n";
    return 0;
}