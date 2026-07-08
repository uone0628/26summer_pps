class Solution:
    def longestCommonPrefix(self, strs: list[str]) -> str:
        if not strs: return ""
        
        # 파이썬의 사전순 min, max를 이용해 처음과 끝만 비교
        s1, s2 = min(strs), max(strs)
        
        for i, c in enumerate(s1):
            if c != s2[i]:
                return s1[:i]
        return s1