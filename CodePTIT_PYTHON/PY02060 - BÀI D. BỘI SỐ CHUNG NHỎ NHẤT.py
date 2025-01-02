import math



def main():
    for t in range(int(input())):
        a, b = map(int, input().split())
        n, cnt = 1, 0
        md = 10 ** 9 + 7
        for i in range(a, b + 1):
            n *= i
            n %= md
        cnt = 3    
        for i in range(2, int(n ** 0.5) + 1):
            if n % i == 0:
                if math.lcm(i, n / i) == n:
                    cnt += 6
                    cnt %= md

        print(cnt)
            
if __name__ == "__main__":
    main()
