#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands)
{
    vector<int> answer;
    for (auto &cmd : commands)
    {
        int i = cmd[0], j = cmd[1], k = cmd[2];
        vector<int> temp(array.begin() + i - 1, array.begin() + j);
        sort(temp.begin(), temp.end());
        answer.push_back(temp[k - 1]);
    }
    return answer;
}

int main()
{
    vector<int> array = {1, 5, 2, 6, 3, 7, 4};
    vector<vector<int>> commands = {{2, 5, 3}, {4, 4, 1}, {1, 7, 3}};
    vector<int> result = solution(array, commands);

    cout << "Result: ";
    for (int num : result)
        cout << num << " ";
    cout << "\n";
    return 0;
}