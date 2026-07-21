#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Solution
{
public:
    bool isPalindrome(string s)
    {
        int left = 0, right = s.length() - 1;
        while (left < right)
        {
            if (!isalnum(s[left]))
                left++;
            else if (!isalnum(s[right]))
                right--;
            else if (tolower(s[left]) != tolower(s[right]))
                return false;
            else
            {
                left++;
                right--;
            }
        }
        return true;
    }
};

int main()
{
    Solution sol;
    cout << "Result 1: " << (sol.isPalindrome("A man, a plan, a canal: Panama") ? "true" : "false") << "\n";
    cout << "Result 2: " << (sol.isPalindrome("race a car") ? "true" : "false") << "\n";
    return 0;
}