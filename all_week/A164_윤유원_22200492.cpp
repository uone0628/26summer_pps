#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

vector<int> solution(string s)
{
    unordered_map<char, int> last_seen;
    vector<int> answer;
    for (int i = 0; i < s.length(); ++i)
    {
        if (last_seen.count(s[i]))
            answer.push_back(i - last_seen[s[i]]);
        else
            answer.push_back(-1);
        last_seen[s[i]] = i;
    }
    return answer;
}

int main()
{
    vector<int> res = solution("banana");
    cout << "Result: ";
    for (int n : res)
        cout << n << " ";
    cout << "\n";
    return 0;
}