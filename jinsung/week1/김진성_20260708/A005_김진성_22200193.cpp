#include <string>
#include <vector>

using namespace std;

int solution(string skill, vector<string> skill_trees)
{
    int answer = 0;

    for (const string &tree : skill_trees)
    {
        string filtered = "";

        // 스킬트리에 있는 스킬 중, 선행 스킬 순서에 포함된 것만 추출
        for (char c : tree)
        {
            if (skill.find(c) != string::npos)
            {
                filtered += c;
            }
        }

        // 추출한 스킬 순서가 원래 skill의 맨 앞부분과 일치하는지 확인
        if (skill.find(filtered) == 0)
        {
            answer++;
        }
    }

    return answer;
}