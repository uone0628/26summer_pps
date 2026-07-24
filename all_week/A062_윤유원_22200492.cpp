#include <iostream>
#include <string>
#include <vector>
using namespace std;

string solution(int a, int b)
{
    vector<string> days = {"THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED"};
    vector<int> months = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int totalDays = b;
    for (int i = 0; i < a - 1; i++)
    {
        totalDays += months[i];
    }
    return days[totalDays % 7];
}

int main()
{
    cout << "Result (5월 24일): " << solution(5, 24) << "\n";
    return 0;
}