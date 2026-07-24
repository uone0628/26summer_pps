class Solution:
    def fairCandySwap(self, aliceSizes: list[int], bobSizes: list[int]) -> list[int]:
        diff = (sum(aliceSizes) - sum(bobSizes)) // 2
        bob_set = set(bobSizes)
        for a in aliceSizes:
            if a - diff in bob_set:
                return [a, a - diff]