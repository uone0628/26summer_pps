def solution(skill, skill_trees):
    answer = 0
    for tree in skill_trees:
        # 스킬트리에 포함된 문자만 추출
        filtered = "".join([c for c in tree if c in skill])
        # 추출한 문자열이 원래 스킬의 앞에서부터 시작하는지(접두사) 확인
        if skill.startswith(filtered):
            answer += 1
    return answer