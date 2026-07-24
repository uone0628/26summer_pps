class Solution:
    def reversePrefix(self, word: str, ch: str) -> str:
        idx = word.find(ch)
        if idx != -1:
            # 슬라이싱[::-1]을 사용해 인덱스까지 뒤집고, 나머지를 이어붙임
            return word[:idx+1][::-1] + word[idx+1:]
        return word