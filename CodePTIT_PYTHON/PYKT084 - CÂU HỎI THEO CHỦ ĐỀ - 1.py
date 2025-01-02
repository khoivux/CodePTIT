import math



def main():
    ds = {}
    arr = [str(input()) for _ in range(int(input()))]
    topic = ''
    cnt = 0
    for i in range(len(arr)):
        if i == 0 or len(arr[i - 1]) == 0:
            topic = arr[i]
            ds[topic] = 0
            continue
        if len(arr[i]) == 0:
            topic = ''
            continue

        ds[topic] += 1
    
    for topic in ds.keys():
        print(f"{topic}: {ds[topic]}")   

if __name__ == "__main__":
    main()