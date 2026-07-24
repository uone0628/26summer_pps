class Solution:
    def twoSum(self, numbers: list[int], target: int) -> list[int]:
        seen = {}
        for i, num in enumerate(numbers):
            if target - num in seen:
                return [seen[target - num] + 1, i + 1]
            seen[num] = i