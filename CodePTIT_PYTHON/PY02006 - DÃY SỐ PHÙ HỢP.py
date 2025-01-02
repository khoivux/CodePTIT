def valid(a, b):
    for i in range(len(a)):
        if a[i] > b[i]:
            return "NO"
    return "YES"
def main():
   for t in range(int(input())):
        n = int(input())
        a = sorted(list(map(int, input().split())))
        b = sorted(list(map(int, input().split())))
        print(valid(a, b))
main()
# 2
# 4
# 7 5 3 2
# 5 4 8 7
# 8
# 7 5 3 2 5 105 45 10
# 2 4 0 5 6 9 75 84 