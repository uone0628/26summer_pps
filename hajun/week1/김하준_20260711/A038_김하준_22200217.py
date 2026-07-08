class Solution:
    def mySqrt(self, x: int) -> int:
        if x == 0: return 0
        r = x
        # 뉴턴-랩슨법 적용
        while r * r > x:
            r = (r + x // r) // 2
        return r