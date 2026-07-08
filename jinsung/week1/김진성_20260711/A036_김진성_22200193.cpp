#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

int main()
{
    int t;
    if (!(cin >> t))
        return 0;

    while (t--)
    {
        double n;
        cin >> n;

        string line;
        getline(cin, line);

        // stringstream을 사용하면 공백을 자동으로 건너뛰고 연산자만 쉽게 파싱할 수 있습니다.
        stringstream ss(line);
        char op;

        while (ss >> op)
        {
            if (op == '@')
                n *= 3;
            else if (op == '%')
                n += 5;
            else if (op == '#')
                n -= 7;
        }

        // printf 대신 C++ iomanip 스타일 사용
        cout << fixed << setprecision(2) << n << "\n";
    }
    return 0;
}