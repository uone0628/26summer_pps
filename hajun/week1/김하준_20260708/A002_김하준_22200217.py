class Solution:
    def generate(self, numRows: int) -> list[list[int]]:
        result = [[1]]
        for _ in range(numRows - 1):
            prev = result[-1]
            # 양 끝에 1을 더하고, 내부는 zip을 이용해 이전 배열의 이웃한 두 값을 더함
            result.append([1] + [a + b for a, b in zip(prev, prev[1:])] + [1])
        return result if numRows > 0 else []