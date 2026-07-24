#include <iostream>
#include <string>
using namespace std;

int solution(string word)
{
    string vowels = "AEIOU";
    int weights[] = {781, 156, 31, 6, 1};
    int answer = 0;
    for (int i = 0; i < word.length(); ++i)
    {
        answer += 1 + vowels.find(word[i]) * weights[i];
    }
    return answer;
}

int main()
{
    cout << "Result: " << solution("AAAAE") << "\n"; // 6
    cout << "Result: " << solution("I") << "\n";     // 1563
    return 0;
}