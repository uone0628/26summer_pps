#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    int uniqueMorseRepresentations(vector<string> &words)
    {
        vector<string> morse = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
        unordered_set<string> seen;
        for (string word : words)
        {
            string code = "";
            for (char c : word)
                code += morse[c - 'a'];
            seen.insert(code);
        }
        return seen.size();
    }
};

int main()
{
    Solution sol;
    vector<string> words = {"gin", "zen", "gig", "msg"};
    cout << "Result: " << sol.uniqueMorseRepresentations(words) << "\n";
    return 0;
}