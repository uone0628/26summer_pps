#include <string>

class Solution
{
public:
    auto removeOuterParentheses(std::string s) -> std::string
    {
        std::string result{};
        auto depth{0};
        for (const auto &ch : s)
        {
            if (ch == '(' && depth++ > 0)
                result += ch;
            if (ch == ')' && depth-- > 1)
                result += ch;
        }
        return result;
    }
};