#include <vector>
#include <unordered_map>
#include <stack>

class NextGreaterElementSolutionFactory
{
public:
    std::vector<int> computeNextGreaterElement(std::vector<int> &targetArray, std::vector<int> &referenceArray)
    {
        std::unordered_map<int, int> nextGreaterMap;
        std::stack<int> trackingStack;
        for (int currentNumber : referenceArray)
        {
            while (!trackingStack.empty() && trackingStack.top() < currentNumber)
            {
                nextGreaterMap[trackingStack.top()] = currentNumber;
                trackingStack.pop();
            }
            trackingStack.push(currentNumber);
        }
        std::vector<int> finalResultList;
        for (int queryNumber : targetArray)
        {
            finalResultList.push_back(nextGreaterMap.count(queryNumber) ? nextGreaterMap[queryNumber] : -1);
        }
        return finalResultList;
    }
};