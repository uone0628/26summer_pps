def solution(phone_book):
    phone_book.sort()
    # zip을 활용해 현재 번호와 다음 번호(인접한 번호)를 쌍으로 묶어 비교
    for p1, p2 in zip(phone_book, phone_book[1:]):
        if p2.startswith(p1):
            return False
    return True