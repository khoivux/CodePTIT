import math



def main():
    for t in range(int(input())):
        n = int(input())
        arr = list(map(int, input().split()))
        L = min(arr)
        R = max(arr)
        res = 0
        for i in range(L, R + 1):
            if i not in arr:
                res += 1
        print(res)
if __name__ == "__main__":
    main()