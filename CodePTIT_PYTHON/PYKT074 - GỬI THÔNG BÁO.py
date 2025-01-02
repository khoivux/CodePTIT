import math



def main():
    for _ in range(int(input())):
        arr = list(map(str, input().split()))
        while sum(len(str) for str in arr) + len(arr) - 1 > 100:
            arr.pop()
        print(' '.join(arr))

if __name__ == "__main__":
    main()