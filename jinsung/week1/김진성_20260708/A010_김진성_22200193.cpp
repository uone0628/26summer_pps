#include <string>
#include <algorithm>

using namespace std;

int solution(string s)
{
    int answer = s.length();

    for (int step = 1; step <= s.length() / 2; ++step)
    {
        string compressed = "";
        string prev = s.substr(0, step);
        int count = 1;

        for (int i = step; i < s.length(); i += step)
        {
            string curr = s.substr(i, step);
            if (prev == curr)
            {
                count++;
            }
            else
            {
                if (count > 1)
                    compressed += to_string(count);
                compressed += prev;
                prev = curr;
                count = 1;
            }
        }

        // 마지막 남은 문자열 처리
        if (count > 1)
            compressed += to_string(count);
        compressed += prev;

        answer = min(answer, (int)compressed.length());
    }

    return answer;
}