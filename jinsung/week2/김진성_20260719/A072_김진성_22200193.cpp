#include <iostream>
#include <string>
#include <vector>

class Solution
{
public:
    auto dayOfYear(std::string date) -> int
    {
        auto year{std::stoi(date.substr(0, 4))};
        auto month{std::stoi(date.substr(5, 2))};
        auto day{std::stoi(date.substr(8, 2))};
        std::vector<int> days{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        {
            days[1] = 29;
        }

        auto res{0};
        for (auto i{0}; i < month - 1; ++i)
        {
            res += days[i];
        }
        return res + day;
    }
};

auto main() -> int
{
    Solution sol;
    std::cout << "Result: " << sol.dayOfYear("2019-01-09") << "\n";
    return 0;
}