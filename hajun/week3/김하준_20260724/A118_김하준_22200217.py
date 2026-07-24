class Solution:
    def moveZeroes(self, nums: list[int]) -> None:
        # 0인 것은 True(1), 0이 아닌 것은 False(0)로 평가하여 정렬 (파이썬 내장 정렬의 안정성 활용)
        nums.sort(key=lambda x: x == 0)