#include <string>
using namespace std;

string solution(string number, int k)
{
    string answer = "";

    for (char num : number)
    {
        // 지울 수 있는 횟수(k)가 남았고,
        // 방금 넣은 숫자보다 현재 숫자가 더 크면, 방금 넣은 숫자를 뺀다.
        while (!answer.empty() && k > 0 && answer.back() < num)
        {
            answer.pop_back();
            k--;
        }
        answer.push_back(num);
    }

    // 만약 "9876" 처럼 내림차순이라서 하나도 안 지워졌다면 끝에서부터 k개를 자른다.
    if (k > 0)
    {
        answer.erase(answer.length() - k, k);
    }

    return answer;
}