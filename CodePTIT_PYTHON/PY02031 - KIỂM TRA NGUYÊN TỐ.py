import math

def isPrime(n):
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return n > 1

def main():
    n, m = map(int, input().split())
    for i in range(n):
        arr = list(map(int, input().split()))
        res = [str(1 if isPrime(j) else 0) for j in arr]
        print(' '.join(res))
        
if __name__ == "__main__":
    main()
# 3 3
# 1 2 3
# 4 5 6
# 7 8 9