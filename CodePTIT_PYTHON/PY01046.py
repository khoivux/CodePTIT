import math


def isPrime(n):
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return n > 1

def main():
    t = int(input())
    for _ in range(t):
        s = input()
        num4 = s[-4:]
        num = int(num4)
        if isPrime(num) == True:
            print('YES')
        else:
            print('NO')
main()