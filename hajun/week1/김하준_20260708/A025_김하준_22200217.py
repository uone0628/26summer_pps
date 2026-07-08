class Solution:
    def isPowerOfFour(self, n: int) -> bool:
        # 비트 마스킹으로 O(1) 확인
        return n > 0 and (n & (n - 1)) == 0 and (n & 0x55555555) != 0