#include <iostream>
#include <vector>
#include <string>
using namespace std;

int solution(vector<string> babbling)
{
    int answer = 0;
    for (string b : babbling)
    {
        string prev = "";
        int i = 0;
        bool valid = true;
        while (i < b.length())
        {
            if (b.substr(i, 3) == "aya" && prev != "aya")
            {
                prev = "aya";
                i += 3;
            }
            else if (b.substr(i, 2) == "ye" && prev != "ye")
            {
                prev = "ye";
                i += 2;
            }
            else if (b.substr(i, 3) == "woo" && prev != "woo")
            {
                prev = "woo";
                i += 3;
            }
            else if (b.substr(i, 2) == "ma" && prev != "ma")
            {
                prev = "ma";
                i += 2;
            }
            else
            {
                valid = false;
                break;
            }
        }
        if (valid)
            answer++;
    }
    return answer;
}

int main()
{
    vector<string> babbling = {"ayaye", "uuu", "yeye", "yemawoo", "ayaayaa"};
    cout << "Result: " << solution(babbling) << "\n"; // 2
    return 0;
}