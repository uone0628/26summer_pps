#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(pair<double, int> a, pair<double, int> b) {
    if (a.first > b.first)
        return true;
    else if (a.first == b.first) {
        if (a.second < b.second)
            return true;
        return false;
    }
    return false;
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<pair<double, int>> v;
    int cur[502];
    int dodal[502];
    fill(cur, cur + N + 1, 0);
    fill(dodal, dodal + N + 1, 0);

    for (int i = 0; i < stages.size(); i++) {
        cur[stages[i]]++;
        for (int j = 1; j <= stages[i]; j++)
            dodal[j]++;
    }

    for (int i = 1; i <= N; i++) {
        if (dodal[i] == 0)
            v.push_back(make_pair(0, i));
        else
            v.push_back(make_pair((double)cur[i] / dodal[i], i));
    }
    sort(v.begin(), v.end(), comp);
    for (int i = 0; i < v.size(); i++)
        answer.push_back(v[i].second);
    return answer;
}