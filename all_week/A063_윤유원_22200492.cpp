#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution
{
public:
    string addBinary(string a, string b)
    {
        string res;
        int i = a.length() - 1, j = b.length() - 1;
        int carry = 0;
        while (i >= 0 || j >= 0 || carry)
        {
            int sum = carry;
            if (i >= 0)
                sum += a[i--] - '0';
            if (j >= 0)
                sum += b[j--] - '0';
            res += to_string(sum % 2);
            carry = sum / 2;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};

int main()
{
    Solution sol;
    cout << "Result: " << sol.addBinary("11", "1") << "\n";
    return 0;
}