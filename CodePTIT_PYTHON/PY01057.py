import math
def prime(s):
    for i in range(2, int(math.sqrt(s)) + 1):
        if s % i == 0:
            return False
    return s > 1
def valid(s):
    for i in range(len(s)):
        if prime(int(s[i])) and not prime(i):
            return False
        if not prime(int(s[i])) and prime(i):
            return False
    return True

def main():
    t = int(input())
    for _ in range(t):
        s = input()
        if valid(s):
            print("YES")
        else:
            print("NO")

main()