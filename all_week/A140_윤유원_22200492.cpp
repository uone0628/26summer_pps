#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

int solution(vector<int> nums)
{
    unordered_set<int> unique_mons(nums.begin(), nums.end());
    return min(unique_mons.size(), nums.size() / 2);
}

int main()
{
    vector<int> nums = {3, 1, 2, 3};
    cout << "Result: " << solution(nums) << "\n";
    return 0;
}