import math
def main():
    n = int(input())
    a = sorted(list(map(int, input().split())))
    for i in range(n - 1):
        for j in range(i + 1, n):
            if math.gcd(a[j], a[i]) == 1:
                print(f"{a[i]} {a[j]}")

main()
# 5
# 3 7 9 6 13