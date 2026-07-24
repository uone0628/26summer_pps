#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution
{
public:
    bool rotateString(string s, string goal)
    {
        if (s.length() != goal.length())
            return false;
        if (s == goal)
            return true;

        // s.length() 만큼 반복해서 회전하며 비교
        for (int i = 0; i < s.length(); ++i)
        {
            rotate(s.begin(), s.begin() + 1, s.end());
            if (s == goal)
                return true;
        }
        return false;
    }
};

int main()
{
    Solution sol;
    cout << "Result: " << (sol.rotateString("abcde", "cdeab") ? "true" : "false") << "\n";
    return 0;
}