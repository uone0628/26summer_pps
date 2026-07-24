#include <iostream>
#include <string>
using namespace std;

string vowels = "AEIOU";
int current_count = 0;
int answer = 0;
bool found = false;

void dfs(string current_word, const string &target)
{
    if (current_word == target)
    {
        answer = current_count;
        found = true;
        return;
    }
    if (current_word.length() == 5 || found)
        return;

    for (int i = 0; i < 5; ++i)
    {
        current_count++;
        dfs(current_word + vowels[i], target);
        if (found)
            return;
    }
}

int solution(string word)
{
    current_count = 0;
    answer = 0;
    found = false;
    dfs("", word);
    return answer;
}

int main()
{
    cout << "Result: " << solution("AAAAE") << "\n";
    cout << "Result: " << solution("I") << "\n";
    return 0;
}