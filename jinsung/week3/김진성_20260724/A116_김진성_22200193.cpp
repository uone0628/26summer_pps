#include <iostream>
#include <string>
#include <vector>
#include <ctime>
using namespace std;

class Solution
{
public:
    string dayOfTheWeek(int day, int month, int year)
    {
        vector<string> days = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

        struct tm time_in = {0};
        time_in.tm_mday = day;
        time_in.tm_mon = month - 1;    // 0~11 범위
        time_in.tm_year = year - 1900; // 1900년 기준

        // 시스템 표준 라이브러리가 요일을 자동으로 계산
        mktime(&time_in);

        return days[time_in.tm_wday];
    }
};

int main()
{
    Solution sol;
    cout << "Result: " << sol.dayOfTheWeek(31, 8, 2019) << "\n";
    return 0;
}