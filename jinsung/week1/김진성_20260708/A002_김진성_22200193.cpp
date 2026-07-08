#include <vector>

using namespace std;

class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> result(numRows);

        for (int i = 0; i < numRows; ++i)
        {
            result[i].resize(i + 1, 1); // 해당 행의 크기만큼 1로 초기화

            // 양 끝(1)을 제외한 내부 요소만 이전 행의 값을 더해서 계산
            for (int j = 1; j < i; ++j)
            {
                result[i][j] = result[i - 1][j - 1] + result[i - 1][j];
            }
        }

        return result;
    }
};