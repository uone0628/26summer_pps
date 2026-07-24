#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    char findTheDifference(string s, string t)
    {
        char res = 0;
        for (char c : s)
            res ^= c;
        for (char c : t)
            res ^= c;
        return res;
    }
};

int main()
{
    Solution sol;
    cout << "Result: " << sol.findTheDifference("abcd", "abcde") << "\n";
    return 0;
}