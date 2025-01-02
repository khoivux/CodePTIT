def main():
    fib = [0, 1, 1]
    for i in range(3, 94):
        fib.append(fib[i - 1] + fib[i - 2])
    for t in range(int(input())):
        a, b = map(int, input().split())
        for i in range(a, b + 1):
            print(fib[i], end = " ")
        print()
main()
# 1
# 1 10
