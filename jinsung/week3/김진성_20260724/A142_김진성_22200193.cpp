#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> res;
    for (int num : arr)
    {
        // 결과 배열이 비어있거나, 마지막 요소가 현재 요소와 다를 때만 추가
        if (res.empty() || res.back() != num)
        {
            res.push_back(num);
        }
    }
    return res;
}

int main()
{
    vector<int> arr = {1, 1, 3, 3, 0, 1, 1};
    vector<int> res = solution(arr);

    cout << "Result: ";
    for (int n : res)
        cout << n << " ";
    cout << "\n";
    return 0;
}