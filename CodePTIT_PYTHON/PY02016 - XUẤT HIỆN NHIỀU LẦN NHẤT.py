def main():
    for t in range(int(input())):
        cnt = {}
        n = int(input())
        arr = sorted(list(map(int, input().split())))
        maxN = 0
        res = 0
        for num in arr:
            if num in cnt:
                cnt[num] += 1
            else:
                cnt[num] = 1
            if cnt[num] > maxN:
                maxN = cnt[num]
                res = num

        if maxN <= n / 2:
            print('NO')
        else:
            print(res)
main()
# 2
# 9
# 3 3 4 2 4 4 2 4 4
# 8
# 3 3 4 2 4 4 2 4