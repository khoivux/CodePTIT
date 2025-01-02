import math


def check(s):
    for i in range(len(s)):
        if i % 2 != int(s[i]) % 2:
            return False
        
    su = sum(int(digit) for digit in s)
    for i in range(2, int(math.sqrt(su)) + 1):
        if su % i == 0:
            return False
    return su > 1

def main():
    t = int(input()) 
    for _ in range(t):
        s = input()
        if check(s):
            print('YES')
        else: print('NO')
main()