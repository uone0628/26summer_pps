#include <string>
#include <vector>
using namespace std;

class Solution
{
    public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> a;
        for (int i = 0; i < numRows; i++) {
            vector<int> tmp;
            for (int j = 0; j <= i; j++) {
                if (j == 0 || i == j) {
                    tmp.push_back(1);
                    continue;
                }
                else
                    tmp.push_back(a[i - 1][j - 1] + a[i - 1][j]);
            }
            a.push_back(tmp);
        }
        return a;
    }
};