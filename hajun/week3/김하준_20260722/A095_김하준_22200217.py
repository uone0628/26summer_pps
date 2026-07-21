import re

def main():
    lines = [
        "987-123-4567",
        "123 456 7890",
        "(123) 456-7890"
    ]
    
    pattern = re.compile(r"^([0-9]{3}-|\([0-9]{3}\) )[0-9]{3}-[0-9]{4}$")
    print("Valid Phone Numbers:")
    for line in lines:
        if pattern.match(line):
            print(line)

if __name__ == '__main__':
    main()