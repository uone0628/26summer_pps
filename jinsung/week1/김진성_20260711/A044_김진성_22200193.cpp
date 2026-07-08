#include <string>
#include <algorithm>

using namespace std;

class Solution
{
public:
    bool checkRecord(string s)
    {
        // 1. 'A'가 2개 미만이어야 함
        // 2. "LLL" (연속된 3번의 지각)이 포함되어 있지 않아야 함

        int absentCount = count(s.begin(), s.end(), 'A');
        bool noLateThreeTimes = (s.find("LLL") == string::npos);

        return (absentCount < 2) && noLateThreeTimes;
    }
};