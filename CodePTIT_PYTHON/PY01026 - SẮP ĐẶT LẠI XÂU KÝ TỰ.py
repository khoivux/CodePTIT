import math

def validate(a, b):
    if len(a) != len(b): return False
    for i in a:
        if i not in b: return False
        if a.count(i) != b.count(i): return False
    return True

def main():
    for t in range(int(input())):
        a, b = input(), input()
        print(f"Test {t + 1}: {'YES' if validate(a, b) else 'NO'}")

if __name__ == "__main__":
    main()