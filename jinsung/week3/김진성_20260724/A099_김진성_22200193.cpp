#include <iostream>
#include <string>
#include <stack>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        unordered_map<char, char> pairs = {
            {')', '('},
            {'}', '{'},
            {']', '['}};

        for (char c : s)
        {
            if (pairs.count(c))
            { // 닫는 괄호인 경우
                if (st.empty() || st.top() != pairs[c])
                    return false;
                st.pop();
            }
            else
            { // 여는 괄호인 경우
                st.push(c);
            }
        }
        return st.empty();
    }
};

int main()
{
    Solution sol;
    cout << "Result: " << (sol.isValid("()[]{}") ? "true" : "false") << "\n";
    return 0;
}