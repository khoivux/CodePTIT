import math

def isPrime(x):
    for i in range(2, int(math.sqrt(x)) + 1):
        if x % i == 0:
            return False
    return x > 1

def main():
    t = int(input())
    for i in range(t):
        n = int(input())
        cnt = int(0)
        for j in range(1, n):
            if math.gcd(n, j) == 1:
                cnt += 1

        if isPrime(cnt):
            print('YES')
        else:
            print('NO')
main()