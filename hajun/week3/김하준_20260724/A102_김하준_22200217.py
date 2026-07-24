class Solution:
    def transpose(self, matrix: list[list[int]]) -> list[list[int]]:
        # zip(*matrix)는 파이썬에서 행렬을 전치하는 가장 유명하고 우아한 방법입니다.
        return [list(row) for row in zip(*matrix)]