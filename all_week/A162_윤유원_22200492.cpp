#include <iostream>
#include <vector>
#include <string>
using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal)
{
    int p1 = 0, p2 = 0;
    for (const string &word : goal)
    {
        if (p1 < cards1.size() && cards1[p1] == word)
            p1++;
        else if (p2 < cards2.size() && cards2[p2] == word)
            p2++;
        else
            return "No";
    }
    return "Yes";
}

int main()
{
    vector<string> cards1 = {"i", "drink", "water"};
    vector<string> cards2 = {"want", "to"};
    vector<string> goal = {"i", "want", "to", "drink", "water"};
    cout << "Result: " << solution(cards1, cards2, goal) << "\n";
    return 0;
}