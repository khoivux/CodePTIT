def main():
    while True:
        n = int(input())
        setN = set()
        if n == 0:
            return 
        setN.add(n)
        while n != 1:
            if n % 2 == 0:
                n = n // 2
            else:
                n = 3 * n + 1
            setN.add(n)
        print(len(setN))
main()
# 1
# 2
# 3
# 0