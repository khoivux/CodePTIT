def solve(s):
    cnt = int(0)
    for char in s:
        if char  == '4' or char == '7':
            cnt += 1
    if cnt == 4 or cnt == 7:
        return True
    return False

def main():
    s = str(input())
    if solve(s):
        print('YES')
    else:
        print("NO")

main()
