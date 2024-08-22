import math


t = int(input())
for _ in range(t):
    a = input()
    b = a[::-1]
    if math.gcd(int(a), int(b)) == 1:
        print('YES')
    else:
        print('NO')