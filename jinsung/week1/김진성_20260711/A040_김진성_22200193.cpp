#include <string>

using namespace std;

class Solution
{
public:
    // 모음인지 확인하는 헬퍼 함수
    bool isVowel(char c)
    {
        c = tolower(c);
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

    bool halvesAreAlike(string s)
    {
        int half = s.length() / 2;
        int leftVowels = 0;
        int rightVowels = 0;

        // 문자열을 나누지 않고 인덱스로 양쪽 절반을 동시에 순회
        for (int i = 0; i < half; ++i)
        {
            if (isVowel(s[i]))
                leftVowels++;
            if (isVowel(s[i + half]))
                rightVowels++;
        }

        return leftVowels == rightVowels;
    }
};