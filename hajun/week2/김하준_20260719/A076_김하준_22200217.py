import sys

def main():
    input_data = sys.stdin.read().split()
    if not input_data:
        return
        
    T = int(input_data[0])
    idx = 1
    
    for t in range(1, T + 1):
        N = int(input_data[idx])
        idx += 1
        names = set()
        for _ in range(N):
            names.add(input_data[idx])
            idx += 1
            
        sorted_names = sorted(list(names), key=lambda x: (len(x), x))
        
        print(f"#{t}")
        for name in sorted_names:
            print(name)

if __name__ == '__main__':
    main()