#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    bool rotateString(string s, string goal)
    {
        if (s.length() != goal.length())
            return false;
        string concat = s + s;
        return concat.find(goal) != string::npos;
    }
};

int main()
{
    Solution sol;
    cout << "Result: " << (sol.rotateString("abcde", "cdeab") ? "true" : "false") << "\n";
    return 0;
}