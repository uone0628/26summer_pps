#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> solution(std::vector<int> array, std::vector<std::vector<int>> commands)
{
    std::vector<int> answer;
    for (std::vector<std::vector<int>>::iterator it = commands.begin(); it != commands.end(); ++it)
    {
        std::vector<int> temp(array.begin() + (*it)[0] - 1, array.begin() + (*it)[1]);
        std::sort(temp.begin(), temp.end());
        answer.push_back(*(temp.begin() + (*it)[2] - 1));
    }
    return answer;
}

int main()
{
    std::vector<int> array = {1, 5, 2, 6, 3, 7, 4};
    std::vector<std::vector<int>> commands = {{2, 5, 3}, {4, 4, 1}, {1, 7, 3}};
    std::vector<int> result = solution(array, commands);

    std::cout << "Result: ";
    for (std::vector<int>::iterator it = result.begin(); it != result.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << "\n";
    return 0;
}