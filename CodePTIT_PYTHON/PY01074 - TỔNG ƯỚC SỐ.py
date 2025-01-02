def solve(n):
    res = 0
    for i in range(2, int(n ** 0.5) + 1):
        while n % i == 0:
            n /= i
            res += i
    if n > 1:
        res += n
    return res

def main():
    res = 0
    for t in range(int(input())):
        n = int(input())
        res += solve(n)
    print(int(res))
main()
# 5
# 7
# 9 
# 10 
# 13 
# 100