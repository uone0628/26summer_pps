#include <string>
#include <algorithm>

using namespace std;

bool solution(string s)
{
    int pCount = count(s.begin(), s.end(), 'p') + count(s.begin(), s.end(), 'P');
    int yCount = count(s.begin(), s.end(), 'y') + count(s.begin(), s.end(), 'Y');

    return pCount == yCount;
}