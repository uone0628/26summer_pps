def solution(x):
    # 제너레이터 표현식과 sum을 이용해 한 줄로 처리
    return x % sum(int(digit) for digit in str(x)) == 0