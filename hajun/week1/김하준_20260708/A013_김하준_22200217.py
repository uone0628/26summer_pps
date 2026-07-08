class Solution:
    def singleNumber(self, nums: list[int]) -> int:
        res = 0
        for num in nums:
            res ^= num # XOR 연산으로 쌍이 맞는 숫자는 모두 0으로 상쇄됨
        return res