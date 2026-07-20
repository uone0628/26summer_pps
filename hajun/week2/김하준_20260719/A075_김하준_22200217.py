from functools import cmp_to_key

def solution(numbers):
    numbers_str = [str(num) for num in numbers]
    numbers_str.sort(key=cmp_to_key(lambda a, b: -1 if a + b > b + a else 1 if a + b < b + a else 0))
    answer = "".join(numbers_str)
    return "0" if answer[0] == "0" else answer