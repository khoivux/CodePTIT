def solve(s):
    cnt = int(0)
    for char in s:
        if char  == '4' or char == '7':
            cnt += 1
    if cnt == len(s):
        return True
    return False

def main():
    t = int(input())
    for i in range(t):
        s = str(input())
        if solve(s):
            print('YES')
        else:
            print("NO")

main()
