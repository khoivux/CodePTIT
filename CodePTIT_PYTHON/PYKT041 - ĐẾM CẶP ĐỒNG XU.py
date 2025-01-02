import math



def main():
    n = int(input())
    arr = [input() for i in range(n)]
    row = [0] * n
    col = [0] * n
    for i in range(n):
        for j in range(n):
            if arr[i][j] == 'C':
                row[i] += 1
                col[j] += 1
    res = 0
    for i in range(n):
        res += row[i] * (row[i] - 1) / 2
        res += col[i] * (col[i] - 1) / 2
    print(int(res))

if __name__ == "__main__":
    main()