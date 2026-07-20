#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &n1, vector<int> &n2)
    {
        unordered_map<int, int> m;
        stack<int> s;
        vector<int> r;
        for (int n : n2)
        {
            while (s.size() && s.top() < n)
                m[s.top()] = n, s.pop();
            s.push(n);
        }
        for (int n : n1)
            r.push_back(m.count(n) ? m[n] : -1);
        return r;
    }
};