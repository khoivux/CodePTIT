def prime(n):
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            return False
    return n > 1
def validate(n):
    if not prime(len(n)):
        return False
    cntPrime = 0;
    for digit in n:
        if prime(int(digit)):
            cntPrime += 1
    if cntPrime > (len(n) - cntPrime):
        return True
    return False
def main():
    t = int(input())
    for _ in range(t):
        n = input()
        if validate(n):
            print("YES")
        else:
            print("NO")
main()
# 3
# 1234567
# 22334455667
# 23400300489898989