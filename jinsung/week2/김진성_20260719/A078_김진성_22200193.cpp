#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> citations)
{
    sort(citations.begin(), citations.end(), greater<int>());
    int h = 0;
    int i = 0;
loop_start:
    if (i >= citations.size())
        goto loop_end;
    if (citations[i] >= i + 1)
    {
        h = i + 1;
        i++;
        goto loop_start;
    }
loop_end:
    return h;
}

int main()
{
    vector<int> citations = {3, 0, 6, 1, 5};
    cout << "Result: " << solution(citations) << "\n";
    return 0;
}