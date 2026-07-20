#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define sz(x) (int)(x).size()
#define rep(i, a, b) for(int i = a; i < (b); ++i)

int solution(vector<vector<int>> b, vector<int> m) {
    int ans = 0, n = sz(b);
    stack<int> s;
    for(auto x : m) {
        int t = 0; --x;
        rep(i, 0, n) if(b[i][x]) { t = b[i][x]; b[i][x] = 0; break; }
        if(!s.empty() && s.top() == t) { s.pop(); ans += 2; }
        else if(t) s.pb(t);
    }
    return ans;
}