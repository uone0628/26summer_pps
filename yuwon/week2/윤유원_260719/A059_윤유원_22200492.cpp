#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // 실행 후 터미널에 입력값을 직접 입력하세요.
    // 예:
    // 1 (테스트케이스 수)
    // 5 3 (N K)
    // 10 20 30 40 50 (점수들)

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    if (!(cin >> T))
        return 0; // 예외 처리용
    for (int t = 1; t <= T; ++t)
    {
        int N, K;
        cin >> N >> K;
        vector<int> scores(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> scores[i];
        }

        sort(scores.rbegin(), scores.rend());

        int sum = 0;
        for (int i = 0; i < K; ++i)
        {
            sum += scores[i];
        }

        cout << "Case #" << t << "\n"
             << sum << "\n";
    }
    return 0;
}