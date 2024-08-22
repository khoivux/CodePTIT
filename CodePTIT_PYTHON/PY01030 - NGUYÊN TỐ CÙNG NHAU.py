import math

n, k = map(int, input().split())
a = 10 ** (k - 1)
b = (10 ** k)
cnt = int(0)
for i in range(a, b):
    if math.gcd(i, n) == 1:
        print(i, end = ' ')
        cnt += 1
        if cnt % 10 == 0:
            print()