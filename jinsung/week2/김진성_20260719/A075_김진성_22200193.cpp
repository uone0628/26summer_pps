#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::string solution(std::vector<int> numbers)
{
    std::vector<std::string> str_nums;
    for (int num : numbers)
    {
        str_nums.push_back(std::to_string(num));
    }
    std::sort(str_nums.begin(), str_nums.end(), [](std::string a, std::string b)
              { return a + b > b + a; });
    if (str_nums[0] == "0")
    {
        return "0";
    }
    std::string answer = "";
    for (std::string s : str_nums)
    {
        answer += s;
    }
    return answer;
}

int main()
{
    std::vector<int> numbers = {6, 10, 2};
    std::cout << "Result: " << solution(numbers) << "\n";
    return 0;
}