#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution
{
public:
    string reversePrefix(string word, char ch)
    {
        // 이터레이터를 바로 반환받아 사용
        auto it = find(word.begin(), word.end(), ch);

        if (it != word.end())
        {
            reverse(word.begin(), it + 1);
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