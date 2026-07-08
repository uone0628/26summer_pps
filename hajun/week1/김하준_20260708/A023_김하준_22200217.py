class Solution:
    def addDigits(self, num: int) -> int:
        # 수학적 규칙 (디지털 루트) 적용 O(1)
        return 0 if num == 0 else 1 + (num - 1) % 9