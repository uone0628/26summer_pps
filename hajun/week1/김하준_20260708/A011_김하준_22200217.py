from collections import Counter

def solution(N, stages):
    counts = Counter(stages)
    fail_rates = []
    total_players = len(stages)
    
    for i in range(1, N + 1):
        if total_players > 0:
            fail_rates.append((i, counts[i] / total_players))
            total_players -= counts[i]
        else:
            fail_rates.append((i, 0))
            
    # 실패율 기준 내림차순, 같으면 스테이지 번호 오름차순 정렬
    fail_rates.sort(key=lambda x: (-x[1], x[0]))
    return [x[0] for x in fail_rates]