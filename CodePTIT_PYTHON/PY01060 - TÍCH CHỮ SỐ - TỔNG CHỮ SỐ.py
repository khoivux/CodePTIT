def solve(s):
    sumOdd = 0
    mulEven = 1
    check = False
    for i in range(len(s)):
        n = int(s[i])
        if i % 2 == 1:
            sumOdd += n
        if i % 2 == 0 and n != 0:
            check = True
            mulEven *= n
    print(f"{mulEven if check else 0} {sumOdd}")

def main():
    t = int(input())
    for _ in range(t):
        s = input()
        solve(s)
main()
