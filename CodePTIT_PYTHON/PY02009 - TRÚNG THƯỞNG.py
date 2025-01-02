
def main():
    for test in range(int(input())):
        cnt = {}
        maxx = 0
        res = 10001
        for t in range(int(input())):
            n = int(input())
            if n in cnt:
                cnt[n] += 1
            else:
                cnt[n] = 1
            maxx = max(cnt[n], maxx)

        for i in cnt.keys():
            if cnt[i] == maxx:
                res = min(res, i)
        print(res)
main()
# 3
# 3
# 999
# 999
# 19
# 4
# 13
# 333
# 333
# 13
# 3
# 11
# 12
# 13
