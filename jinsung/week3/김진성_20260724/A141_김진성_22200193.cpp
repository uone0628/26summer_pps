#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
using namespace std;

bool solution(vector<string> phone_book)
{
    unordered_set<string> dict(phone_book.begin(), phone_book.end());

    for (const string &phone : phone_book)
    {
        string prefix = "";
        for (int i = 0; i < phone.length() - 1; ++i)
        {
            prefix += phone[i];
            if (dict.count(prefix))
            {
                return false; // 누군가의 접두어가 맵에 존재함
            }
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