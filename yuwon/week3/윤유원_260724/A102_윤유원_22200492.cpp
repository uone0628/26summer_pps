#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<vector<int>> transpose(vector<vector<int>> &matrix)
    {
        int m = matrix.size(), n = matrix[0].size();
        vector<vector<int>> res(n, vector<int>(m));
        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                res[j][i] = matrix[i][j];
            }
        }
        return res;
    }
};

int main()
{
    Solution sol;
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<vector<int>> res = sol.transpose(matrix);

    cout << "Result:\n";
    for (const auto &row : res)
    {
        for (int val : row)
            cout << val << " ";
        cout << "\n";
    }
    return 0;
}