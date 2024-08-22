import math


def sumNum(n):
    res = int(0)
    while(n > 0):
        res += n % 10
        n = n // 10
    return res

def isPrime(n):
    for i in range(2, int(math.sqrt(n)) + 1):
        if(n % i == 0):
            return False
    return n > 1

def main():
    t = int(input())
    for i in range (t):
        a, b = map(int, input().split())
        c = int(math.gcd(a, b))
        if(isPrime(sumNum(c))):
            print('YES')
        else:
            print('NO')
main()