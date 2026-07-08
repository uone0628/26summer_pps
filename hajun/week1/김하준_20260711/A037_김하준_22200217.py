class Solution:
    def selfDividingNumbers(self, left: int, right: int) -> list[int]:
        def is_self_dividing(n):
            # '0'이 포함되어 있지 않고, 모든 자리 수로 나누어 떨어져야 함
            return '0' not in str(n) and all(n % int(d) == 0 for d in str(n))
            
        return [n for n in range(left, right + 1) if is_self_dividing(n)]