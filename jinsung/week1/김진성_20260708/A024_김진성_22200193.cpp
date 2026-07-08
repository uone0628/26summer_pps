#include <vector>
using namespace std;

class Solution
{
public:
    bool lemonadeChange(vector<int> &bills)
    {
        int five = 0, ten = 0;

        for (int bill : bills)
        {
            if (bill == 5)
            {
                five++;
            }
            else if (bill == 10)
            {
                if (five == 0)
                    return false;
                five--;
                ten++;
            }
            else
            { // 20달러를 받았을 때
                // 10달러짜리가 있다면 먼저 내어주는 것이 그리디(탐욕적) 관점에서 항상 유리함
                if (ten > 0 && five > 0)
                {
                    ten--;
                    five--;
                }
                else if (five >= 3)
                {
                    five -= 3;
                }
                else
                {
                    return false;
                }
            }
        }
        return true;
    }
};