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
            if i + j < n - 1:
                s1 += mat[i][j]
            elif i + j >= n:
                s2 += mat[i][j]
    res = abs(s1 - s2)
    if res <= k:
        print("YES")
    else:
        print("NO")
    print(res)

if __name__ == "__main__":
    main()
