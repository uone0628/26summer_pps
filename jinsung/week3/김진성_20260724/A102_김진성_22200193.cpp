#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<vector<int>> transpose(vector<vector<int>> &matrix)
    {
        vector<vector<int>> res;
        int m = matrix.size(), n = matrix[0].size();

        // 열을 기준으로 먼저 순회하여 새로운 행을 만듭니다.
        for (int col = 0; col < n; ++col)
        {
            vector<int> newRow;
            for (int row = 0; row < m; ++row)
            {
                newRow.push_back(matrix[row][col]);
            }
            res.push_back(newRow);
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