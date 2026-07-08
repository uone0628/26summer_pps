#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(string s) {
    int ans = s.size();
    for (int i = 1; i <= s.size() / 2; i++) {
        string tmp = "";
        for (int j = 0; j < s.size(); j += i) {
            if (j + 2 * i <= s.size()) { 
                if (s.substr(j, i) != s.substr(j + i, i)) {
                    tmp += s.substr(j, i);
                    continue;
                }
                tmp += s.substr(j, i);
                int cnt = 1;
                while (j + 2 * i <= s.size() && s.substr(j, i) == s.substr(j + i, i)) {
                    cnt++;
                    j += i;
                }
                tmp += to_string(cnt);
            }
            else {                       
                tmp += s.substr(j); 
                break;
            }
        }
        if (ans > tmp.size())
            ans = tmp.size(); 
    }
    return ans;
}