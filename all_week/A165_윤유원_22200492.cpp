#include <iostream>
using namespace std;

int getDivisorsCount(int n)
{
    int count = 0;
    for (int i = 1; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            count++;
            if (i * i != n)
                count++;
        }
    }
    return count;
}

int solution(int number, int limit, int power)
{
    int answer = 0;
    for (int i = 1; i <= number; ++i)
    {
        int atk = getDivisorsCount(i);
        answer += (atk > limit) ? power : atk;
    }
    return answer;
}

int main()
{
    cout << "Result: " << solution(5, 3, 2) << "\n"; // 10
    return 0;
}