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

        // 전체 합과 구간 합을 STL 알고리즘으로 분리 계산
        int totalDist = accumulate(distance.begin(), distance.end(), 0);
        int clockwiseDist = accumulate(distance.begin() + start, distance.begin() + destination, 0);

        return min(clockwiseDist, totalDist - clockwiseDist);
    }
};

int main()
{
    Solution sol;
    vector<int> distance = {1, 2, 3, 4};
    cout << "Result: " << sol.distanceBetweenBusStops(distance, 0, 1) << "\n";
    return 0;
}