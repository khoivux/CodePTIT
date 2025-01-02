import math


def prime(s):
    for i in range(2, int(math.sqrt(s)) + 1):
        if s % i == 0:
            return False
    return s > 1
def main():
    t = int(input())
    for _ in range(t):
        s = input()
        if len(s) >= 4 and prime(int(s[-4:])):
            print("YES")
        else:
            print("NO")

main()
