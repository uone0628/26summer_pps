#include <iostream>
#include <string>
using namespace std;

int solution(string t, string p)
{
    int answer = 0;
    long long p_num = stoll(p);
    int len = p.length();
    for (int i = 0; i <= t.length() - len; ++i)
    {
        if (stoll(t.substr(i, len)) <= p_num)
        {
            answer++;
        }
    }
    return answer;
}

int main()
{
    cout << "Result: " << solution("3141592", "271") << "\n"; // 2
    return 0;
}