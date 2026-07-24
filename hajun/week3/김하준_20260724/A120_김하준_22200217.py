class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        # 문자의 아스키 코드 합의 차이를 다시 문자로 변환
        return chr(sum(map(ord, t)) - sum(map(ord, s)))