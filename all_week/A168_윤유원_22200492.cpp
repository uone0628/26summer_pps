#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int k, int m, vector<int> score)
{
    sort(score.rbegin(), score.rend());
    int answer = 0;
    for (int i = m - 1; i < score.size(); i += m)
    {
        answer += score[i] * m;
    }
    return answer;
}

int main()
{
    vector<int> score = {1, 2, 3, 1, 2, 3, 1};
    cout << "Result: " << solution(3, 4, score) << "\n"; // 8
    return 0;
}