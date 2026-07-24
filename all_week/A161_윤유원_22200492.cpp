#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets)
{
    unordered_map<char, int> min_keys;
    for (const string &key : keymap)
    {
        for (int i = 0; i < key.length(); ++i)
        {
            if (min_keys.count(key[i]) == 0)
                min_keys[key[i]] = i + 1;
            else
                min_keys[key[i]] = min(min_keys[key[i]], i + 1);
        }
    }

    vector<int> answer;
    for (const string &target : targets)
    {
        int sum = 0;
        bool possible = true;
        for (char c : target)
        {
            if (min_keys.count(c) == 0)
            {
                possible = false;
                break;
            }
            sum += min_keys[c];
        }
        answer.push_back(possible ? sum : -1);
    }
    return answer;
}

int main()
{
    vector<string> keymap = {"ABACD", "BCEFD"};
    vector<string> targets = {"ABCD", "AABB"};
    vector<int> res = solution(keymap, targets);
    cout << "Result: ";
    for (int n : res)
        cout << n << " ";
    cout << "\n";
    return 0;
}