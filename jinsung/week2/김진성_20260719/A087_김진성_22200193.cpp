#include <iostream>
#include <vector>
#include <algorithm>

struct SortByUnits
{
    bool operator()(const std::vector<int> &a, const std::vector<int> &b) const
    {
        return a[1] > b[1];
    }
};

class Solution
{
public:
    int maximumUnits(std::vector<std::vector<int>> &boxTypes, int truckSize)
    {
        std::sort(boxTypes.begin(), boxTypes.end(), SortByUnits());
        int totalUnits = 0;

        std::for_each(boxTypes.begin(), boxTypes.end(), [&truckSize, &totalUnits](const std::vector<int> &box)
                      {
            int take = std::min(box[0], truckSize);
            totalUnits += take * box[1];
            truckSize -= take; });

        return totalUnits;
    }
};

int main()
{
    Solution sol;
    std::vector<std::vector<int>> boxTypes = {{1, 3}, {2, 2}, {3, 1}};
    std::cout << "Result: " << sol.maximumUnits(boxTypes, 4) << "\n";
    return 0;
}