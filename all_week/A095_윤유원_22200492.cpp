#include <iostream>
#include <string>
#include <vector>
#include <regex>
using namespace std;

int main()
{
    // 테스트용 전화번호 목록 (원래는 파일 입출력)
    vector<string> lines = {
        "987-123-4567",
        "123 456 7890",
        "(123) 456-7890"};

    regex pattern("^([0-9]{3}-|\\([0-9]{3}\\) )[0-9]{3}-[0-9]{4}$");
    cout << "Valid Phone Numbers:\n";
    for (const string &line : lines)
    {
        if (regex_match(line, pattern))
        {
            cout << line << "\n";
        }
    }
    return 0;
}