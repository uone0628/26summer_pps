#include <iostream>
#include <vector>
using namespace std;

int solution(int n, int m, vector<int> section)
{
    int answer = 0;
    int painted = 0;
    for (int s : section)
    {
        if (s > painted)
        {
            answer++;
            painted = s + m - 1;
        }
    }
    return answer;
}

int main()
{
    vector<int> section = {2, 3, 6};
    cout << "Result: " << solution(8, 4, section) << "\n"; // 2
    return 0;
}