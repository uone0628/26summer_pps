#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

#define fast_io                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define rep(i, a, b) for (int i = a; i < (b); ++i)
#define all(x) (x).begin(), (x).end()

bool c(const string &a, const string &b)
{
    return a.length() != b.length() ? a.length() < b.length() : a < b;
}

int main()
{
    fast_io;
    int t;
    if (!(cin >> t))
        return 0;
    rep(k, 1, t + 1)
    {
        int n;
        cin >> n;
        vector<string> v(n);
        rep(i, 0, n) cin >> v[i];
        sort(all(v), c);
        v.erase(unique(all(v)), v.end());
        cout << "#" << k << "\n";
        for (const auto &s : v)
            cout << s << "\n";
    }
    return 0;
}