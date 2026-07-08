#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int N, vector<int> stages)
{
    vector<pair<double, int>> fail_rates;
    int total_players = stages.size();

    // 스테이지별 머무는 인원 카운트
    vector<int> counts(N + 2, 0);
    for (int s : stages)
    {
        counts[s]++;
    }

    for (int i = 1; i <= N; ++i)
    {
        if (total_players == 0)
        {
            fail_rates.push_back({0.0, i});
        }
        else
        {
            double rate = (double)counts[i] / total_players;
            fail_rates.push_back({rate, i});
            total_players -= counts[i]; // 도달 인원 갱신
        }
    }

    // 람다식을 이용한 정렬 (실패율 내림차순, 같으면 번호 오름차순)
    stable_sort(fail_rates.begin(), fail_rates.end(), [](const pair<double, int> &a, const pair<double, int> &b)
                {
        if (a.first == b.first) return a.second < b.second;
        return a.first > b.first; });

    vector<int> answer;
    for (auto p : fail_rates)
    {
        answer.push_back(p.second);
    }
    return answer;
}