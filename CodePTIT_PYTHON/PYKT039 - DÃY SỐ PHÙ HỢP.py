import math

def check(a, b):
    for i in range(len(a)):
        if a[i] > b[i]:
            return False
    return True

def main():
    for _ in range(int(input())):
        n = int(input())
        a = list(map(int, input().split()))
        b = list(map(int, input().split()))
        a.sort(key=lambda x: x)
        b.sort(key=lambda x: x)
        if check(a, b):
            print("YES")
        else: 
            print("NO")
if __name__ == "__main__":
    main()