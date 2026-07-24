#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

int dateToDays(string date)
{
    int y = stoi(date.substr(0, 4));
    int m = stoi(date.substr(5, 2));
    int d = stoi(date.substr(8, 2));
    return y * 12 * 28 + m * 28 + d;
}

vector<int> solution(string today, vector<string> terms, vector<string> privacies)
{
    unordered_map<char, int> term_map;
    for (string term : terms)
    {
        term_map[term[0]] = stoi(term.substr(2));
    }

    int today_days = dateToDays(today);
    vector<int> answer;

    for (int i = 0; i < privacies.size(); ++i)
    {
        int days = dateToDays(privacies[i].substr(0, 10));
        char type = privacies[i][11];
        if (days + term_map[type] * 28 <= today_days)
        {
            answer.push_back(i + 1);
        }
    }
    return answer;
}

int main()
{
    string today = "2022.05.19";
    vector<string> terms = {"A 6", "B 12", "C 3"};
    vector<string> privacies = {"2021.05.02 A", "2021.07.01 B", "2022.02.19 C", "2022.02.20 C"};
    vector<int> res = solution(today, terms, privacies);
    cout << "Result: ";
    for (int n : res)
        cout << n << " ";
    cout << "\n";
    return 0;
}