#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int> ingredient)
{
    vector<int> st;
    int answer = 0;
    for (int x : ingredient)
    {
        st.push_back(x);
        if (st.size() >= 4)
        {
            int n = st.size();
            if (st[n - 4] == 1 && st[n - 3] == 2 && st[n - 2] == 3 && st[n - 1] == 1)
            {
                answer++;
                st.resize(n - 4);
            }
        }
    }
    return answer;
}

int main()
{
    vector<int> ingredient = {2, 1, 1, 2, 3, 1, 2, 3, 1};
    cout << "Result: " << solution(ingredient) << "\n"; // 2
    return 0;
}