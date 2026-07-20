#include <string>
using namespace std;

class Solution
{
public:
    string convertToTitle(int n)
    {
        if (n == 0)
            return "";
        n--; // 0-based index 변환
        return convertToTitle(n / 26) + string(1, (char)(n % 26 + 'A'));
    }
};