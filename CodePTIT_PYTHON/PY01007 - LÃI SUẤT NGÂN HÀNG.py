def main():
    t = int(input())
    for i in range(t):
        n, x, m = map(float, input().split())
        res = int(1)
        while True:
            n += (n * x) / 100
            if n >= m:
                break
            res += 1
        print(res)

main()