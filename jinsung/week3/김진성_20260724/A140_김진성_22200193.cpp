#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> nums)
{
    int max_pick = nums.size() / 2;

    // 정렬 후 연속된 중복 요소를 제거하는 이터레이터 반환
    sort(nums.begin(), nums.end());
    auto last = unique(nums.begin(), nums.end());

    // 고유한 폰켓몬의 종류 수 계산
    int unique_count = distance(nums.begin(), last);

    return min(unique_count, max_pick);
}

int main()
{
    vector<int> nums = {3, 1, 2, 3};
    cout << "Result: " << solution(nums) << "\n";
    return 0;
}