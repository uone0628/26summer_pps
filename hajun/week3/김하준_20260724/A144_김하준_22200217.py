def solution(word):
    answer = 0
    weights = [781, 156, 31, 6, 1]
    # 모음 인덱스에 따라 수학적 가중치를 주어 한 번에 계산
    for i, char in enumerate(word):
        answer += 1 + "AEIOU".find(char) * weights[i]
    return answer