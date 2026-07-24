#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool solution(string s)
{
    stack<char> st;
    for (char c : s)
    {
        if (c == '(')
        {
            st.push(c);
        }
        else
        {
            if (st.empty())
                return false; // 짝이 없는 닫는 괄호
            st.pop();
        }
    }
    return st.empty(); // 순회가 끝난 후 스택이 비어있어야 정상
}

int main()
{
    cout << "Result: " << (solution("()()") ? "true" : "false") << "\n";
    cout << "Result: " << (solution(")()(") ? "true" : "false") << "\n";
    return 0;
}