#include <iostream>
#include <stack>
#include <algorithm>
#include <utility>

class IMinStack
{
public:
    virtual void push(int val) = 0;
    virtual void pop() = 0;
    virtual int top() = 0;
    virtual int getMin() = 0;
    virtual ~IMinStack() = default;
};

class MinStack : public IMinStack
{
private:
    std::stack<std::pair<int, int>> m_stackData;

public:
    MinStack() {}

    void push(int val) override
    {
        if (this->m_stackData.empty())
        {
            this->m_stackData.push(std::make_pair(val, val));
        }
        else
        {
            int currentMin = this->m_stackData.top().second;
            this->m_stackData.push(std::make_pair(val, std::min(val, currentMin)));
        }
    }

    void pop() override
    {
        this->m_stackData.pop();
    }

    int top() override
    {
        return this->m_stackData.top().first;
    }

    int getMin() override
    {
        return this->m_stackData.top().second;
    }
};

int main()
{
    MinStack minStack;
    minStack.push(-2);
    minStack.push(0);
    minStack.push(-3);
    std::cout << "Min: " << minStack.getMin() << "\n";
    minStack.pop();
    std::cout << "Top: " << minStack.top() << "\n";
    std::cout << "Min: " << minStack.getMin() << "\n";
    return 0;
}