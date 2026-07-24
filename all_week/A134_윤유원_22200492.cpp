#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution
{
public:
    string reversePrefix(string word, char ch)
    {
        size_t pos = word.find(ch);
        if (pos != string::npos)
        {
            reverse(word.begin(), word.begin() + pos + 1);
        }
        return word;
    }
};

int main()
{
    Solution sol;
    cout << "Result: " << sol.reversePrefix("abcdefd", 'd') << "\n";
    return 0;
}