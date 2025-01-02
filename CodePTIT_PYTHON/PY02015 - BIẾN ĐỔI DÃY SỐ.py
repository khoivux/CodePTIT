def main():
    while True:
        arr = list(map(int, input().split()))
        if arr.count(0) == 4:
            return
        cnt = 0
        while arr.count(0) != 4:
            tmp = arr.copy()
            for i in range(4):
                arr[i] = abs(tmp[i] - tmp[(i + 1) % 4])
            cnt += 1
        print(cnt - 1)
main()
# 1 3 5 9
# 4 3 2 1
# 0 0 0 0