#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<int> solution(vector<string> wallpaper)
{
    int min_r = 51, min_c = 51, max_r = -1, max_c = -1;
    for (int i = 0; i < wallpaper.size(); ++i)
    {
        for (int j = 0; j < wallpaper[0].size(); ++j)
        {
            if (wallpaper[i][j] == '#')
            {
                min_r = min(min_r, i);
                min_c = min(min_c, j);
                max_r = max(max_r, i);
                max_c = max(max_c, j);
            }
        }
    }
    return {min_r, min_c, max_r + 1, max_c + 1};
}

int main()
{
    vector<string> wp = {".#...", "..#..", "...#."};
    vector<int> res = solution(wp);
    cout << "Result: [" << res[0] << ", " << res[1] << ", " << res[2] << ", " << res[3] << "]\n";
    return 0;
}