#include <iostream>
#include <stack>

class MyQueue
{
private:
    std::stack<int> primaryStack;
    std::stack<int> secondaryStack;

public:
    MyQueue() {}

    void push(int incomingValue)
    {
        this->primaryStack.push(incomingValue);
    }

    int pop()
    {
        this->peek();
        int topValue = this->secondaryStack.top();
        this->secondaryStack.pop();
        return topValue;
    }

    int peek()
    {
        if (this->secondaryStack.empty())
        {
            while (!this->primaryStack.empty())
            {
                this->secondaryStack.push(this->primaryStack.top());
                this->primaryStack.pop();
            }
        }
        return this->secondaryStack.top();
    }

    bool empty()
    {
        return this->primaryStack.empty() && this->secondaryStack.empty();
    }
};

int main()
{
    MyQueue *queueInstance = new MyQueue();
    queueInstance->push(1);
    queueInstance->push(2);
    std::cout << "Peek: " << queueInstance->peek() << "\n";
    std::cout << "Pop: " << queueInstance->pop() << "\n";
    std::cout << "Empty: " << (queueInstance->empty() ? "true" : "false") << "\n";
    delete queueInstance;
    return 0;
}