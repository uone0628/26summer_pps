def solution(s):
    answer = len(s)
    for step in range(1, len(s) // 2 + 1):
        compressed = ""
        prev = s[:step]
        count = 1
        
        for i in range(step, len(s), step):
            curr = s[i:i+step]
            if prev == curr:
                count += 1
            else:
                compressed += (str(count) if count > 1 else "") + prev
                prev = curr
                count = 1
                
        compressed += (str(count) if count > 1 else "") + prev
        answer = min(answer, len(compressed))
        
    return answer