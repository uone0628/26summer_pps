#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> sizes)
{
    int max_w = 0, max_h = 0;
    for (auto size : sizes)
    {
        max_w = max(max_w, max(size[0], size[1]));
        max_h = max(max_h, min(size[0], size[1]));
    }
    return max_w * max_h;
}

int main()
{
    vector<vector<int>> sizes = {{60, 50}, {30, 70}, {60, 30}, {80, 40}};
    cout << "Result: " << solution(sizes) << "\n"; // 4000
    return 0;
}