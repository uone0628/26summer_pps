#include <iostream>
#include <vector>
#include <numeric>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    vector<int> fairCandySwap(vector<int> &aliceSizes, vector<int> &bobSizes)
    {
        int sumA = accumulate(aliceSizes.begin(), aliceSizes.end(), 0);
        int sumB = accumulate(bobSizes.begin(), bobSizes.end(), 0);
        int diff = (sumA - sumB) / 2;
        unordered_set<int> setB(bobSizes.begin(), bobSizes.end());

        for (int a : aliceSizes)
        {
            if (setB.count(a - diff))
            {
                return {a, a - diff};
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
    cout << "Result: [" << res[0] << ", " << res[1] << "]\n";
    return 0;
}