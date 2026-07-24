#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int maximumUnits(vector<vector<int>> &boxTypes, int truckSize)
    {
        sort(boxTypes.begin(), boxTypes.end(), [](const vector<int> &a, const vector<int> &b)
             { return a[1] > b[1]; });
        int maxUnits = 0;
        for (const auto &box : boxTypes)
        {
            int count = min(box[0], truckSize);
            maxUnits += count * box[1];
            truckSize -= count;
            if (truckSize == 0)
                break;
        }
        return maxUnits;
    }
};

int main()
{
    Solution sol;
    vector<vector<int>> boxTypes = {{1, 3}, {2, 2}, {3, 1}};
    cout << "Result: " << sol.maximumUnits(boxTypes, 4) << "\n";
    return 0;
}