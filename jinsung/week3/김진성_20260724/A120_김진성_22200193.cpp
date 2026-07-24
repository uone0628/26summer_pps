#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    char findTheDifference(string s, string t)
    {
        int sumS = 0, sumT = 0;

        for (char c : s)
            sumS += c;
        for (char c : t)
            sumT += c;

        // 두 문자열의 아스키 합의 차이가 곧 추가된 문자
        return (char)(sumT - sumS);
    }
};

int main()
{
    Solution sol;
    cout << "Result: " << sol.findTheDifference("abcd", "abcde") << "\n";
    return 0;
}