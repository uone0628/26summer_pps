#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool solution(vector<string> phone_book)
{
    sort(phone_book.begin(), phone_book.end());
    for (size_t i = 0; i < phone_book.size() - 1; ++i)
    {
        if (phone_book[i + 1].find(phone_book[i]) == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    vector<string> phone_book = {"119", "97674223", "1195524421"};
    cout << "Result: " << (solution(phone_book) ? "true" : "false") << "\n";
    return 0;
}