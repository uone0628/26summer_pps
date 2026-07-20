class Solution:
    def heightChecker(self, heights: list[int]) -> int:
        return sum(1 for h1, h2 in zip(heights, sorted(heights)) if h1 != h2)