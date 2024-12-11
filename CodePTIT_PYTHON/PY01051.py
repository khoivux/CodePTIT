def isPrime(n):
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            return False
    return n > 1

def main():  
    t = int(input())
    for _ in range(t):
        n = input()
        sum = 0
        for i in range(len(n)):
            sum += int(n[i])
        if isPrime(sum):
            print('YES')
        else:
            print('NO')
main()