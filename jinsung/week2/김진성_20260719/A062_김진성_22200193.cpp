#include <string>
#include <vector>

const std::string week_days[] = {"THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED"};
const int days_in_month[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

std::string solution(int month, int day)
{
    int total_accumulated_days = day;
    for (int idx = 0; idx < month - 1; idx++)
    {
        total_accumulated_days += days_in_month[idx];
    }
    return week_days[total_accumulated_days % 7];
}