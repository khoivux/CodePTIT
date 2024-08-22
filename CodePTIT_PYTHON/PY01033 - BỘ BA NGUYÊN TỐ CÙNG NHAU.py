import math


l, r = map(int, input().split())
for i in range(l, r + 1):
    for j in range(i + 1, r + 1):
        for k in range(j + 1, r + 1):
            if math.gcd(i, j) == math.gcd(j, k) == math.gcd(k, i) == 1:
                print(f"({i}, {j}, {k})")