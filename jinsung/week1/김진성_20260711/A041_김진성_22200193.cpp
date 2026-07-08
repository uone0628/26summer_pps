#include <string>
#include <cctype>

using namespace std;

string solution(string s)
{
    // 첫 문자는 무조건 대문자 시도 (공백이면 변화 없음)
    s[0] = toupper(s[0]);

    for (int i = 1; i < s.length(); i++)
    {
        // 이전 문자가 공백이면 현재 문자는 대문자
        if (s[i - 1] == ' ')
        {
            s[i] = toupper(s[i]);
        }
        // 그 외의 경우는 모두 소문자
        else
        {
            s[i] = tolower(s[i]);
        }
    }

    return s;
}