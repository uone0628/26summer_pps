#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

vector<string> solution(vector<string> players, vector<string> callings)
{
    unordered_map<string, int> ranks;
    for (int i = 0; i < players.size(); ++i)
    {
        ranks[players[i]] = i;
    }

    for (const string &call : callings)
    {
        int idx = ranks[call];
        string prev_player = players[idx - 1];

        // Swap players
        players[idx - 1] = call;
        players[idx] = prev_player;

        // Update ranks
        ranks[call] = idx - 1;
        ranks[prev_player] = idx;
    }
    return players;
}

int main()
{
    vector<string> players = {"mumu", "soe", "poe", "kai", "mine"};
    vector<string> callings = {"kai", "kai", "mine", "mine"};
    vector<string> res = solution(players, callings);

    cout << "Result: ";
    for (string s : res)
        cout << s << " ";
    cout << "\n";
    return 0;
}