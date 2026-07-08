class Solution:
    def plusOne(self, digits: list[int]) -> list[int]:
        # 배열을 문자열로 이어 붙여 정수로 만든 뒤 +1 하고, 다시 리스트로 변환
        num = int("".join(map(str, digits))) + 1
        return [int(x) for x in str(num)]