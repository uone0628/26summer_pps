import sys

def main():
    input_data = sys.stdin.read().split()
    if not input_data:
        return
    
    T = int(input_data[0])
    idx = 1
    for t in range(1, T + 1):
        N, K = int(input_data[idx]), int(input_data[idx+1])
        idx += 2
        
        scores = []
        for _ in range(N):
            scores.append(int(input_data[idx]))
            idx += 1
            
        scores.sort(reverse=True)
        print(f"Case #{t}\n{sum(scores[:K])}")

if __name__ == '__main__':
    main()