def solution(s):
    count = 0
    for char in s:
        count += 1 if char == '(' else -1
        if count < 0:
            return False
    return count == 0