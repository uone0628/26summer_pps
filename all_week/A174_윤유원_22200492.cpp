#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> solution(int k, vector<int> score)
{
    priority_queue<int, vector<int>, greater<int>> pq;
    vector<int> answer;

    for (int s : score)
    {
        pq.push(s);
        if (pq.size() > k)
        {
            pq.pop();
        }
        answer.push_back(pq.top());
    }
    return answer;
}

int main()
{
    vector<int> score = {10, 100, 20, 150, 1, 100, 200};
    vector<int> res = solution(3, score);
    cout << "Result: ";
    for (int n : res)
        cout << n << " ";
    cout << "\n";
    return 0;
}