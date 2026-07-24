#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        // 0이 아닌 요소들의 상대적 순서를 유지하며 앞으로 분할 배치
        stable_partition(nums.begin(), nums.end(), [](int n)
                         { return n != 0; });
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {0, 1, 0, 3, 12};
    sol.moveZeroes(nums);
    cout << "Result: ";
    for (int n : nums)
        cout << n << " ";
    cout << "\n";
    return 0;
}