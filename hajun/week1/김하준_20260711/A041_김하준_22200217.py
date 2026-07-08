def solution(s):
    res = ""
    for i, c in enumerate(s):
        # 첫 글자이거나 바로 앞이 공백이면 대문자로
        if i == 0 or s[i - 1] == ' ':
            res += c.upper()
        else:
            res += c.lower()
    return res