class Solution:
    def halvesAreAlike(self, s: str) -> bool:
        vowels = set('aeiouAEIOU')
        half = len(s) // 2
        
        left_count = sum(1 for c in s[:half] if c in vowels)
        right_count = sum(1 for c in s[half:] if c in vowels)
        
        return left_count == right_count