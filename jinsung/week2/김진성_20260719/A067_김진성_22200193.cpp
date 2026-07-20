#include <iostream>
#include <string>

class Solution
{
public:
    std::string removeDuplicates(std::string sInputString)
    {
        std::string sResultString = "";
        for (char cCurrentChar : sInputString)
        {
            if (!sResultString.empty() && sResultString.back() == cCurrentChar)
            {
                sResultString.pop_back();
            }
            else
            {
                sResultString.push_back(cCurrentChar);
            }
        }
        return sResultString;
    }
};

int main()
{
    Solution objSolution;
    std::cout << "Result: " << objSolution.removeDuplicates("abbaca") << "\n";
    return 0;
}