import math



def main():
    for _ in range(int(input())):
        n, m = map(int, input().split())
        arr = list(map(int, input().split()))
        a, b = [], []
        Max = max(arr)
        for i in range(n):
            if arr[i] == Max:
                arr.insert(i, m)
                break
        for i in arr:
            if i < 0: a.append(i)
            else: b.append(i)
        for i in a: print(i, end = ' ')
        for i in b: print(i, end = ' ')
        print()
if __name__ == "__main__":
    main()