def main():
    n = int(input())
    arr = list(map(int, input().split()))
    for i in range(1, n + 2):
        if i not in arr:
            print(i)
            break
main()