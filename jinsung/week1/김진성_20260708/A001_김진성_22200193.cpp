#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int findContentChildren(vector<int> &g, vector<int> &s)
    {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int child = 0, cookie = 0;

        // 투 포인터를 사용하여 한 번의 순회로 해결
        while (child < g.size() && cookie < s.size())
        {
            if (s[cookie] >= g[child])
            {
                child++; // 쿠키가 아이의 요구조건을 만족하면 다음 아이로 넘어감
            }
            cookie++; // 쿠키는 사용했든 안 했든 무조건 다음 쿠키로 넘어감
        }

        return child;
    }
};