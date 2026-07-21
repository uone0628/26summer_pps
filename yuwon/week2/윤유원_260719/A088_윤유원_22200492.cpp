#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

class MinStack
{
    stack<pair<int, int>> st;

public:
    MinStack() {}

    void push(int val)
    {
        if (st.empty())
            st.push({val, val});
        else
            st.push({val, min(val, st.top().second)});
    }

    void pop() { st.pop(); }

    int top() { return st.top().first; }

    int getMin() { return st.top().second; }
};

int main()
{
    MinStack minStack;
    minStack.push(-2);
    minStack.push(0);
    minStack.push(-3);
    cout << "Min: " << minStack.getMin() << "\n"; // -3
    minStack.pop();
    cout << "Top: " << minStack.top() << "\n";    // 0
    cout << "Min: " << minStack.getMin() << "\n"; // -2
    return 0;
}