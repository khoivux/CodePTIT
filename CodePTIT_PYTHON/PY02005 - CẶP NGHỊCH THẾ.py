def main():
    t = int(input())
    arr = list(map(int, input().split()))
    cnt = 0
    for i in range(t - 1):
        for j in range(i + 1, t):
            if arr[i] > arr[j]:
                cnt += 1
    print(cnt)
main()