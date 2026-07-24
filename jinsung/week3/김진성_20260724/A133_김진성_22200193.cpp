#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Solution
{
public:
    string capitalizeTitle(string title)
    {
        int n = title.length();
        int left = 0;

        for (int right = 0; right <= n; ++right)
        {
            // 단어의 끝(공백이거나 문자열 끝)에 도달했을 때
            if (right == n || title[right] == ' ')
            {
                int len = right - left;
                if (len > 2)
                {
                    title[left] = toupper(title[left]);
                    for (int i = left + 1; i < right; ++i)
                    {
                        title[i] = tolower(title[i]);
                    }
                }
                else
                {
                    for (int i = left; i < right; ++i)
                    {
                        title[i] = tolower(title[i]);
                    }
                }
                left = right + 1; // 다음 단어의 시작점으로 이동
            }
        }
        return title;
    }
};

int main()
{
    Solution sol;
    cout << "Result: " << sol.capitalizeTitle("capiTalIze tHe titLe") << "\n";
    return 0;
}