import datetime

class Solution:
    def dayOfTheWeek(self, day: int, month: int, year: int) -> str:
        # 내장 datetime 라이브러리를 활용해 요일 문자열(A) 추출
        return datetime.date(year, month, day).strftime("%A")