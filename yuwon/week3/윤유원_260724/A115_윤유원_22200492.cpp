#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int maxNumberOfBalloons(string text)
    {
        unordered_map<char, int> count;
        for (char c : text)
            count[c]++;
        return min({count['b'], count['a'], count['l'] / 2, count['o'] / 2, count['n']});
    }
};

int main()
{
    Solution sol;
    cout << "Result: " << sol.maxNumberOfBalloons("nlaebolko") << "\n";
    return 0;
}