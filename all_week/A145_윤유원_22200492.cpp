#include <iostream>
#include <algorithm>
using namespace std;

long long solution(int price, int money, int count)
{
    long long total = (long long)price * count * (count + 1) / 2;
    return max(0LL, total - money);
}

int main()
{
    cout << "Result: " << solution(3, 20, 4) << "\n"; // 10
    return 0;
}

// #include <iostream>
// #include <algorithm>
// using namespace std;

// long long solution(int price, int money, int count)
// {
//     long long current_money = money;
//     long long current_price = price;

//     // 타는 횟수만큼 점진적으로 비용 지불
//     for (int i = 1; i <= count; ++i)
//     {
//         current_money -= (current_price * i);
//     }

//     if (current_money >= 0)
//         return 0;
//     return -current_money; // 부족한 만큼 반환
// }

// int main()
// {
//     cout << "Result: " << solution(3, 20, 4) << "\n";
//     return 0;
// }