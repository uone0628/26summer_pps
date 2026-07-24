#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution
{
public:
    string dayOfTheWeek(int day, int month, int year)
    {
        vector<string> days = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
        if (month < 3)
        {
            month += 12;
            year -= 1;
        }
        int c = year / 100;
        int y = year % 100;
        int w = (day + (13 * (month + 1)) / 5 + y + y / 4 + c / 4 + 5 * c) % 7;
        // Zeller's congruence는 토요일이 0이지만 여기 식에서는 조정되어 일요일 기준 등 다를 수 있음
        // 표준 Zeller (토요일 = 0):
        int zeller = (day + 13 * (month + 1) / 5 + y + y / 4 + c / 4 + 5 * c) % 7;
        // 토요일 = 0, 일요일 = 1, ... 금요일 = 6.
        int idx = (zeller + 6) % 7; // 배열 인덱스에 맞춤 (일요일=0)
        return days[idx];
    }
};

int main()
{
    Solution sol;
    cout << "Result: " << sol.dayOfTheWeek(31, 8, 2019) << "\n"; // Saturday
    return 0;
}