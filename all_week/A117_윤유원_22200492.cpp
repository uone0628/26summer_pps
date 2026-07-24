#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int distanceBetweenBusStops(vector<int> &distance, int start, int destination)
    {
        if (start > destination)
            swap(start, destination);
        int dist1 = 0, total = 0;
        for (int i = 0; i < distance.size(); ++i)
        {
            if (i >= start && i < destination)
                dist1 += distance[i];
            total += distance[i];
        }
        return min(dist1, total - dist1);
    }
};

int main()
{
    Solution sol;
    vector<int> distance = {1, 2, 3, 4};
    cout << "Result: " << sol.distanceBetweenBusStops(distance, 0, 1) << "\n";
    return 0;
}