#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool cmp(const string &a, const string &b)
{
    if (a.length() != b.length())
        return a.length() < b.length();
    return a < b;
}

int main()
{
    // 터미널에서 테스트용 입력을 직접 타이핑하세요.
    // 예: 1 (T) -> 5 (N) -> apple -> dog -> cat -> dog -> dog
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    if (!(cin >> T))
        return 0;

    for (int t = 1; t <= T; ++t)
    {
        int N;
        cin >> N;
        vector<string> names(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> names[i];
        }

        sort(names.begin(), names.end(), cmp);
        names.erase(unique(names.begin(), names.end()), names.end());

        cout << "#" << t << "\n";
        for (const string &name : names)
        {
            cout << name << "\n";
        }
    }
    return 0;
}