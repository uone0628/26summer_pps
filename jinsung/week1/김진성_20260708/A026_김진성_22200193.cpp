#include <string>
using namespace std;

bool solution(int x)
{
    int sum = 0;

    // 숫자를 문자열로 변환하여 각 문자의 아스키 코드를 활용해 합산
    string s = to_string(x);
    for (char c : s)
    {
        sum += c - '0';
    }

    return x % sum == 0;
}