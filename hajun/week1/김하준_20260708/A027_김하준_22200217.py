def solution(number, k):
    stack = []
    for num in number:
        while stack and k > 0 and stack[-1] < num:
            stack.pop()
            k -= 1
        stack.append(num)
        
    # k가 남았을 경우 뒤에서부터 자름 ("9876" 같은 케이스)
    if k > 0:
        stack = stack[:-k]
        
    return "".join(stack)