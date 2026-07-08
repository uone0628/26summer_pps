#include <string>

using namespace std;

class Solution
{
public:
    // 백스페이스가 적용된 최종 문자열을 반환하는 함수
    string buildString(const string &str)
    {
        string result = "";
        for (char c : str)
        {
            if (c != '#')
            {
                result.push_back(c);
            }
            else if (!result.empty())
            {
                result.pop_back(); // #이고 문자열이 비어있지 않으면 지우기
            }
        }
        return result;
    }

    bool backspaceCompare(string s, string t)
    {
        return buildString(s) == buildString(t);
    }
};