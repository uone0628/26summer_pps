#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> fairCandySwap(vector<int> &aliceSizes, vector<int> &bobSizes)
    {
        int sumA = accumulate(aliceSizes.begin(), aliceSizes.end(), 0);
        int sumB = accumulate(bobSizes.begin(), bobSizes.end(), 0);
        int diff = (sumA - sumB) / 2;

        // 이분 탐색을 위해 배열 정렬
        sort(bobSizes.begin(), bobSizes.end());

        for (int a : aliceSizes)
        {
            int target = a - diff;
            // binary_search를 통해 값이 존재하는지 확인
            if (binary_search(bobSizes.begin(), bobSizes.end(), target))
            {
                return {a, target};
            }
        }
        return {};
    }
};

int main()
{
    Solution sol;
    vector<int> alice = {1, 1};
    vector<int> bob = {2, 2};
    vector<int> res = sol.fairCandySwap(alice, bob);
    if (!res.empty())
    {
        cout << "Result: [" << res[0] << ", " << res[1] << "]\n";
    }
    return 0;
}