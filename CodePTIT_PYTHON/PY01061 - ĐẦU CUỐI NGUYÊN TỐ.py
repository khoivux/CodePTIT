import math


def prime(s):
    for i in range(2, int(math.sqrt(s)) + 1):
        if s % i == 0:
            return False
    return s > 1
def main():
    t = int(input())
    for _ in range(t):
        n = input()
        if len(n) >= 3 and prime(int(n[:3])) and prime(int(n[-3:])):
            print("YES")
        else:
            print("NO")
main()
# 3
# 12743
# 7337
# 12345678901234