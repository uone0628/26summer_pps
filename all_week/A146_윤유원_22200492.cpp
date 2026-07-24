#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> A, vector<int> B)
{
    sort(A.begin(), A.end());
    sort(B.rbegin(), B.rend());

    int sum = 0;
    for (size_t i = 0; i < A.size(); ++i)
    {
        sum += A[i] * B[i];
    }
    return sum;
}

int main()
{
    vector<int> A = {1, 4, 2};
    vector<int> B = {5, 4, 4};
    cout << "Result: " << solution(A, B) << "\n"; // 29
    return 0;
}

// #include <iostream>
// #include <vector>
// #include <queue>
// using namespace std;

// int solution(vector<int> A, vector<int> B)
// {
//     // A를 위한 최소 힙
//     priority_queue<int, vector<int>, greater<int>> minHeap(A.begin(), A.end());
//     // B를 위한 최대 힙
//     priority_queue<int> maxHeap(B.begin(), B.end());

//     int sum = 0;
//     while (!minHeap.empty())
//     {
//         sum += (minHeap.top() * maxHeap.top());
//         minHeap.pop();
//         maxHeap.pop();
//     }
//     return sum;
// }

// int main()
// {
//     vector<int> A = {1, 4, 2};
//     vector<int> B = {5, 4, 4};
//     cout << "Result: " << solution(A, B) << "\n";
//     return 0;
// }