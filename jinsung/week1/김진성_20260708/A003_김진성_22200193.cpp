#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        // 뒤에서부터 순회
        for (int i = digits.size() - 1; i >= 0; --i)
        {
            if (digits[i] < 9)
            {
                digits[i]++;
                return digits; // 올림이 발생하지 않으면 바로 리턴
            }
            digits[i] = 0; // 9인 경우 0으로 만들고 다음 자릿수로 올림 처리
        }

        // 모든 자릿수가 9여서 0이 된 경우 (예: 99 -> 00)
        digits.insert(digits.begin(), 1); // 맨 앞에 1 추가 (100)
        return digits;
    }
};