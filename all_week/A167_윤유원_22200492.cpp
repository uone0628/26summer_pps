#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string solution(vector<int> food)
{
    string left = "";
    for (int i = 1; i < food.size(); ++i)
    {
        left += string(food[i] / 2, '0' + i);
    }
    string right = left;
    reverse(right.begin(), right.end());
    return left + "0" + right;
}

int main()
{
    vector<int> food = {1, 3, 4, 6};
    cout << "Result: " << solution(food) << "\n"; // "1223330333221"
    return 0;
}