def solution(a, b):
    days = ["THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED"]
    months = [31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
    
    total_days = b
    for i in range(a - 1):
        total_days += months[i]
        
    return days[total_days % 7]