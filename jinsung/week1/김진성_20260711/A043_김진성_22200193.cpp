#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        if (strs.empty())
            return "";

        // 문자열을 사전순으로 정렬
        sort(strs.begin(), strs.end());

        // 정렬을 했으므로, 첫 번째 문자열과 마지막 문자열만 비교하면 됨
        string first = strs.front();
        string last = strs.back();
        string answer = "";

        for (int i = 0; i < min(first.length(), last.length()); ++i)
        {
            if (first[i] != last[i])
            {
                break;
            }
            answer += first[i];
        }

        return answer;
    }
};