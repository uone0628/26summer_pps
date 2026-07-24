#include <iostream>
using namespace std;

int solution(int n)
{
    for (int x = 2; x < n; ++x)
    {
        if (n % x == 1)
            return x;
    }
    return n - 1;
}

int main()
{
    cout << "Result: " << solution(10) << "\n"; // 3
    cout << "Result: " << solution(12) << "\n"; // 11
    return 0;
}