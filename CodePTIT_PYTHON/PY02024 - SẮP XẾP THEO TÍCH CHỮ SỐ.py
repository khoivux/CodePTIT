import math

def mul(n):
    res = 1
    while n > 0:
        res *= (n % 10)
        n //= 10
    return res

def main():
    for t in range(int(input())):
        n = int(input())
        arr = list(map(int, input().split()))
        arr.sort(key=lambda s :(mul(s), int(s)))
        print(*arr)

if __name__ == "__main__":
    main()
# 1
# 8
# 143 43 22 99 7 9 1111 10000000