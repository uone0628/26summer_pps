#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int TestCases;
    if (cin >> TestCases)
    {
        for (int t = 1; t <= TestCases; ++t)
        {
            int TotalSubjects, MaxChoices;
            cin >> TotalSubjects >> MaxChoices;
            vector<int> SubjectScores(TotalSubjects);

            for (int i = 0; i < TotalSubjects; ++i)
            {
                cin >> SubjectScores[i];
            }

            sort(SubjectScores.rbegin(), SubjectScores.rend());

            int MaxPossibleScore = 0;
            for (int i = 0; i < MaxChoices; ++i)
            {
                MaxPossibleScore += SubjectScores[i];
            }

            cout << "Case #" << t << "\n"
                 << MaxPossibleScore << "\n";
        }
    }
    return 0;
}