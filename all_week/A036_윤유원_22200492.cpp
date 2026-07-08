#include <iostream>
#include <string>
using namespace std;

int main() {
  int t;
  float n;
  string s;
  
  scanf("%d", &t);
  
  for(int i = 0; i < t; i++)
  {
    scanf("%f", &n);
    getline(cin, s);
    
    for(int i = 0; i < s.length(); i++)
    {
      if(s[i] == '@') n *= 3;
      else if(s[i] == '%') n += 5;
      else if(s[i] == '#') n -= 7; 
    }

    printf("%.2f\n", n);
  }

  return 0;
}
