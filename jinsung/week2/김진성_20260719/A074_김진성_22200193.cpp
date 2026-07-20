#include <iostream>
#include <string>
#include <cctype>

class Solution
{
public:
    bool isPalindrome(std::string s)
    {
        if (s.empty())
            return true;
        const char *pLeft = s.c_str();
        const char *pRight = s.c_str() + s.length() - 1;

        while (pLeft < pRight)
        {
            if (!isalnum(*pLeft))
            {
                pLeft++;
            }
            else if (!isalnum(*pRight))
            {
                pRight--;
            }
            else if (tolower(*pLeft) != tolower(*pRight))
            {
                return false;
            }
            else
            {
                pLeft++;
                pRight--;
            }
        }
        return true;
    }
};

int main()
{
    Solution sol;
    std::cout << "Result: " << sol.isPalindrome("race a car") << "\n";
    return 0;
}