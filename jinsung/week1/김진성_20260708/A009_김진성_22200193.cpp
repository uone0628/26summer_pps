#include <string>
#include <algorithm>

using namespace std;

bool solution(string s)
{
    if (s.length() != 4 && s.length() != 6)
    {
        return false;
    }
    // s의 모든 요소가 숫자인지 확인
    return all_of(s.begin(), s.end(), ::isdigit);
}