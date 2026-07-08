#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = skill_trees.size();

    int arr[27] = {0,};

    int cnt = 1;
    for (int i = 0; i < skill.length(); i++)
        arr[skill[i] - 65] = cnt++;

    for (int i = 0; i < skill_trees.size(); i++) {
        string str = skill_trees[i];

        int find = 1;
        for (int j = 0; j < str.length(); j++) {
            if (arr[str[j] - 65] == 0)
                continue;

            if (arr[str[j] - 65] > find) {
                answer--;
                break;
            }

            else if (arr[str[j] - 65] == find)
                find++;
        }
    }
    return answer;
}