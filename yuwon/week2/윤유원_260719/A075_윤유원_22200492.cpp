#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(string a, string b)
{
    return a + b > b + a;
}

string solution(vector<int> numbers)
{
    vector<string> str_nums;
    for (int num : numbers)
    {
        str_nums.push_back(to_string(num));
    }

    sort(str_nums.begin(), str_nums.end(), cmp);

    if (str_nums[0] == "0")
        return "0";

    string answer = "";
    for (string s : str_nums)
    {
        answer += s;
    }
    return answer;
}

int main()
{
    vector<int> numbers = {6, 10, 2};
    cout << "Result: " << solution(numbers) << "\n";
    return 0;
}