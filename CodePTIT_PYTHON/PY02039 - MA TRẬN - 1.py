import math



def main():
    n = int(input())
    mat = []
    for i in range(n):
        row = list(map(int, input().split()))
        mat.append(row)

    k = int(input())
    s1, s2 = 0, 0
    for i in range(n):
        for j in range(n):
            if i > j:
                s1 += mat[i][j]
            elif i < j:
                s2 += mat[i][j]
    res = abs(s1 - s2)

    if res <= k:
        print("YES")
    else:
        print("NO")
    print(res)

if __name__ == "__main__":
    main()
# 5
# 2 8 10 6 7
# 6 3 2 6 9
# 10 2 6 2 8
# 9 9 7 9 8
# 9 6 5 6 9
# 5