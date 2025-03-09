import math
import re

def valid(s):
    arr = [str(x)  for x in s]
    for i in range(len(arr)):
        if (arr[i] >= 'a' and arr[i] <= 'z') or (arr[i] >= '0' and arr[i] <= '9'): continue
        else: arr.remove(arr[i])
    return ''.join(arr)
def main():
    cnt = {}
    arr = []
    for t in range(int(input())):
        s = input().lower()
        a = s.split()
        for st in a:
            st = valid(st)
            if st not in cnt:
                cnt[st] = 1
                arr.append(st)
            else:
                cnt[st] += 1
    arr.sort(key = lambda x: (-cnt[x], x))
    for s in arr:
        print(s, cnt[s])
if __name__ == "__main__":
    main()