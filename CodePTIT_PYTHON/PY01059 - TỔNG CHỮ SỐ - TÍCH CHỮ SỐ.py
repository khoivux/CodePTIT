def solve(s):
    sumEven = 0
    mulOdd = 1
    check = False
    for i in range(len(s)):
        n = int(s[i])
        if i % 2 == 0:
            sumEven += n
        if i % 2 == 1 and n != 0:
            check = True
            mulOdd *= n
    print(f"{sumEven} {mulOdd if check else 0}")

def main():
    t = int(input())
    for _ in range(t):
        s = input()
        solve(s)
main()
