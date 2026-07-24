#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int uniqueMorseRepresentations(vector<string> &words)
    {
        const char *morse[] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};

        vector<string> transformations;
        for (const string &word : words)
        {
            string code;
            for (char c : word)
            {
                code += morse[c - 'a'];
            }
            transformations.push_back(code);
        }

        // 정렬 후 unique를 사용해 중복 요소 제거
        sort(transformations.begin(), transformations.end());
        auto it = unique(transformations.begin(), transformations.end());

        return distance(transformations.begin(), it);
    }
};

int main()
{
    Solution sol;
    vector<string> words = {"gin", "zen", "gig", "msg"};
    cout << "Result: " << sol.uniqueMorseRepresentations(words) << "\n";
    return 0;
}