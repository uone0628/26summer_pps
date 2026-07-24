class Solution:
    def capitalizeTitle(self, title: str) -> str:
        # 단어 길이가 3 이상이면 capitalize(), 아니면 lower() 처리
        return ' '.join(w.title() if len(w) > 2 else w.lower() for w in title.split())