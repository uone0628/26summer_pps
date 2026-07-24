#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int> number)
{
    int answer = 0;
    int n = number.size();
    for (int i = 0; i < n - 2; ++i)
    {
        for (int j = i + 1; j < n - 1; ++j)
        {
            for (int k = j + 1; k < n; ++k)
            {
                if (number[i] + number[j] + number[k] == 0)
                    answer++;
            }
        }
    }
    return answer;
}

int main()
{
    vector<int> num = {-2, 3, 0, 2, -5};
    cout << "Result: " << solution(num) << "\n"; // 2
    return 0;
}