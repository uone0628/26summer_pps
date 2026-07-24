#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    string convertToTitle(int columnNumber)
    {
        string res = "";
        while (columnNumber > 0)
        {
            columnNumber--;
            res = (char)(columnNumber % 26 + 'A') + res;
            columnNumber /= 26;
        }
        return res;
    }
};

int main()
{
    Solution sol;
    cout << "Result 1: " << sol.convertToTitle(1) << "\n";
    cout << "Result 28: " << sol.convertToTitle(28) << "\n";
    cout << "Result 701: " << sol.convertToTitle(701) << "\n";
    return 0;
}