#include <iostream>
#include <vector>
#include <utility>

class Solution
{
public:
    [[nodiscard]] auto sortArrayByParityII(std::vector<int> &nums) -> std::vector<int>
    {
        auto even_idx{0ULL};
        auto odd_idx{1ULL};
        const auto total_size{nums.size()};

        while (even_idx < total_size && odd_idx < total_size)
        {
            while (even_idx < total_size && nums.at(even_idx) % 2 == 0)
                even_idx += 2;
            while (odd_idx < total_size && nums.at(odd_idx) % 2 != 0)
                odd_idx += 2;

            if (even_idx < total_size && odd_idx < total_size)
            {
                std::swap(nums.at(even_idx), nums.at(odd_idx));
            }
        }
        return nums;
    }
};

auto main() -> int
{
    Solution sol;
    std::vector<int> nums = {4, 2, 5, 7};
    auto res = sol.sortArrayByParityII(nums);
    std::cout << "Result: ";
    for (const auto &n : res)
        std::cout << n << " ";
    std::cout << "\n";
    return 0;
}