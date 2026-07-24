def solution(nums):
    # 중복을 제거한 종류의 수와, 최대로 고를 수 있는 수 중 작은 값을 반환
    return min(len(set(nums)), len(nums) // 2)