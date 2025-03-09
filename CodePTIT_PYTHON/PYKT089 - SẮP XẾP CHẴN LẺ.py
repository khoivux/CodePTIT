import math



def main():
    n = int(input())
    a = list(map(int, input().split()))
    if (len(a) < n):
        while len(a) < n:
            k = list(map(int, input().split()))
            for num in k:
                a.append(num)

    chan, le = [], []
    id_chan, id_le = [], []

    for i in range(n):
        if a[i] & 1:
            id_le.append(i)
            le.append(a[i])
        else:
            id_chan.append(i)
            chan.append(a[i])
    le.sort(key = lambda i: -i)
    chan.sort(key = lambda i: i)

    for i in range(n):
        if i in id_chan:
            print(chan[0], end = ' ')
            chan.remove(chan[0])
            id_chan.remove(i)
        else:
            print(le[0], end = ' ')
            le.remove(le[0])
            id_le.remove(i)

if __name__ == "__main__":
    main()