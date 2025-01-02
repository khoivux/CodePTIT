import math



def main():
    n, m = map(int, input().split())
    arr = [list(map(int, input().split())) for i in range(n)]
    dx = [-1, -1, -1, 0, 1, 1, 1, 0]
    dy = [-1, 0, 1, 1, 1, 0, -1, -1]
    cnt = 0
    check = [[0 for _ in range(m)] for _ in range(n)]
    for i in range(n):
        for j in range(m):
            if arr[i][j] == -1:
                for k in range(8):
                    x = i + dx[k]
                    y = j + dy[k]
                    if 0 <= x < n and 0 <= y < m and arr[x][y] >= 0 and check[x][y] == 0:
                        cnt += arr[x][y]
                        check[x][y] = 1
    print(cnt)
if __name__ == "__main__":
    main()