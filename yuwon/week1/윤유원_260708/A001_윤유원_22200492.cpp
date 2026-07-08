#include <string>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

class Solution
{
    public:
    int findContentChildren(vector<int> &g, vector<int> &s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int i = 0, j = 0;
        if (s.size() == 0)
            return 0;
        for (; i < g.size() && j < s.size(); i++, j++) {
            while (g[i] > s[j]) {
                j++;
                if (j == s.size())
                    return i;
            }
        }
        return i;
    }
};