import math


def solve(n):
    res = ["1"]
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            cnt = int(0)
            while n % i == 0:
                cnt += 1
                n //= i
            res.append(f"* {i}^{cnt}")
    if(n > 1):
        res.append(f"* {n}^{1}")
    print(" ".join(res))

def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        solve(n)
main()