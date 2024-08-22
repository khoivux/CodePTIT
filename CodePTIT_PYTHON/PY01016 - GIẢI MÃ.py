def solve(s):
    for i in range(0, len(s) -1, 2):
        cnt = int(ord(s[i + 1]) - ord('0'))
        for j in range(0, cnt):
            print(s[i], end = '')
    print()

def main():
    t = int(input())
    for i in range(t):
        s = str(input())
        solve(s)
main()