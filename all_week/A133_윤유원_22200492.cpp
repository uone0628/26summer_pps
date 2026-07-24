#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
using namespace std;

class Solution
{
public:
    string capitalizeTitle(string title)
    {
        stringstream ss(title);
        string word, res;
        while (ss >> word)
        {
            for (char &c : word)
                c = tolower(c);
            if (word.length() > 2)
                word[0] = toupper(word[0]);
            res += word + " ";
        }
        res.pop_back(); // 마지막 공백 제거
        return res;
    }
};

int main()
{
    Solution sol;
    cout << "Result: " << sol.capitalizeTitle("capiTalIze tHe titLe") << "\n";
    return 0;
}