#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    vector<string> fizzBuzz(int n)
    {
        vector<string> res;
        for (int i = 1; i <= n; ++i)
        {
            if (i % 15 == 0)
                res.push_back("FizzBuzz");
            else if (i % 3 == 0)
                res.push_back("Fizz");
            else if (i % 5 == 0)
                res.push_back("Buzz");
            else
                res.push_back(to_string(i));
        }
        return res;
    }
};

int main()
{
    Solution sol;
    vector<string> result = sol.fizzBuzz(15);
    for (const string &s : result)
    {
        cout << s << " ";
    }
    cout << "\n";
    return 0;
}