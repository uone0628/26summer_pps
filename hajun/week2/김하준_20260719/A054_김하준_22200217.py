def solution(board, moves):
    answer = 0
    stack = []
    size = len(board)
    
    for move in moves:
        target = 0
        move -= 1 # 파이썬은 0-based index
        for i in range(size):
            if board[i][move] != 0:
                target = board[i][move]
                board[i][move] = 0
                break
        
        if stack and stack[-1] == target:
            stack.pop()
            answer += 2
        elif target != 0:
            stack.append(target)
            
    return answer