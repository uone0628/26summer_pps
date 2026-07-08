#include <algorithm>
#include <vector>
using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> a;

    for (int i = 0; i < arr.size(); i++){
        if (arr[i] % divisor == 0)
            a.push_back(arr[i]);
    }
    sort(a.begin(), a.end());
    if (a.empty())
        a.push_back(-1);
    return a;
}