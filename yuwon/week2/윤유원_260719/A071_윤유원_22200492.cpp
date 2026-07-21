#include <iostream>
#include <stack>
using namespace std;

class MyQueue
{
    stack<int> s1, s2;

public:
    MyQueue() {}

    void push(int x)
    {
        s1.push(x);
    }

    int pop()
    {
        peek();
        int val = s2.top();
        s2.pop();
        return val;
    }

    int peek()
    {
        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        return s2.top();
    }

    bool empty()
    {
        return s1.empty() && s2.empty();
    }
};

int main()
{
    MyQueue *obj = new MyQueue();
    obj->push(1);
    obj->push(2);
    cout << "Peek: " << obj->peek() << "\n";                        // 1
    cout << "Pop: " << obj->pop() << "\n";                          // 1
    cout << "Empty: " << (obj->empty() ? "true" : "false") << "\n"; // false
    delete obj;
    return 0;
}