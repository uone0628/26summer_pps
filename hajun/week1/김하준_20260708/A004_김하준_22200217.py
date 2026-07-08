def solution(arr, divisor):
    answer = sorted([x for x in arr if x % divisor == 0])
    return answer if answer else [-1]