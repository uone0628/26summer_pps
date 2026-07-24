#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int maxNumberOfBalloons(string text)
    {
        int freq[26] = {0};
        for (char c : text)
        {
            freq[c - 'a']++;
        }

        // 'b', 'a', 'l', 'o', 'n' 에 해당하는 인덱스
        return min({freq['b' - 'a'],
                    freq['a' - 'a'],
                    freq['l' - 'a'] / 2,
                    freq['o' - 'a'] / 2,
                    freq['n' - 'a']});
    }
};

int main()
{
    Solution sol;
    cout << "Result: " << sol.maxNumberOfBalloons("nlaebolko") << "\n";
    return 0;
}