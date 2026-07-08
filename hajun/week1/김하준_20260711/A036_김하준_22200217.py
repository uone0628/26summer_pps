import sys

def main():
    lines = sys.stdin.read().splitlines()
    if not lines: return
    t = int(lines[0])
    
    for i in range(1, t + 1):
        parts = lines[i].split()
        n = float(parts[0])
        for op in parts[1:]:
            if op == '@': n *= 3
            elif op == '%': n += 5
            elif op == '#': n -= 7
        print(f"{n:.2f}")

if __name__ == "__main__":
    main()