#include <string>
#include <iostream>
using namespace std;

bool solution(string s) {
    bool answer = true;
    int Pp = 0;
    int Yy = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'p' || s[i] == 'P')
            Pp++;
        else if (s[i] == 'Y' || s[i] == 'y')
            Yy++;
    }

    if (Pp == Yy)
        answer = true;
    else
        answer = false; 
    return answer;
}