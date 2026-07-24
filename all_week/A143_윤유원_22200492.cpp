#include <iostream>
#include <string>
using namespace std;

bool solution(string s)
{
    int count = 0;
    for (char c : s)
    {
        if (c == '(')
            count++;
        else
            count--;
        if (count < 0)
            return false;
    }
    return count == 0;
}

int main()
{
    cout << "Result: " << (solution("()()") ? "true" : "false") << "\n";
    cout << "Result: " << (solution(")()(") ? "true" : "false") << "\n";
    return 0;
}