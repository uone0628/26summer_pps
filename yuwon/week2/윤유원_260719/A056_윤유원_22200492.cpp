#include <iostream>
#include <vector>
#include <unordered_map>
#include <stack>
using namespace std;

class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_map<int, int> m;
        stack<int> st;
        for (int n : nums2)
        {
            while (!st.empty() && st.top() < n)
            {
                m[st.top()] = n;
                st.pop();
            }
            st.push(n);
        }
        vector<int> res;
        for (int n : nums1)
            res.push_back(m.count(n) ? m[n] : -1);
        return res;
    }
};

int main()
{
    Solution sol;
    vector<int> nums1 = {4, 1, 2};
    vector<int> nums2 = {1, 3, 4, 2};
    vector<int> result = sol.nextGreaterElement(nums1, nums2);

    cout << "Result: ";
    for (int n : result)
        cout << n << " ";
    cout << "\n";
    return 0;
}