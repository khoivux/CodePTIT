def main():
    for t in range(int(input())):
        s = input()
        n = input()
        id, cnt = s.find(n), 0
        while id != -1:
            cnt += 1
            id = s.find(n, id + len(n))
        print(cnt)
main()
# 2
# 1212121112211221121
# 121
# 2222222222322292
# 2222