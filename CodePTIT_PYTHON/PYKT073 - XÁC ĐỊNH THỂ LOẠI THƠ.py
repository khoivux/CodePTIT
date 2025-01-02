import math



def main():
    n = int(input())
    a = [list(map(str, input().split())) for _ in range(n)]
    
    cnt = 0
    kind = []
    for i in range(len(a)):
        if len(a[i]) == 7: cnt += 1
        if cnt == 4:
            kind.append(2)
            cnt = 0  

        if len(a[i]) == 6:
            if i == 0 or len(a[i - 1]) == 7:
                kind.append(1)

    print(len(kind))
    for i in kind: print(i)   

if __name__ == "__main__":
    main()