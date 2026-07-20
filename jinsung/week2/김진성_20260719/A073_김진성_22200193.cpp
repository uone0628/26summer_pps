#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    vector<string> fizzBuzz(int n)
    {
        vector<string> r;
        for (int i = 1; i <= n; ++i)
            r.push_back(i % 15 == 0 ? "FizzBuzz" : i % 3 == 0 ? "Fizz"
                                               : i % 5 == 0   ? "Buzz"
                                                              : to_string(i));
        return r;
    }
};

int main()
{
    Solution s;
    for (auto x : s.fizzBuzz(15))
        cout << x << " ";
    cout << "\n";
    return 0;
}