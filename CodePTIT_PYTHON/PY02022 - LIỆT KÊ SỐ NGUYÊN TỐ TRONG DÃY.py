import math
 
def valid(n):
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return n > 1
 
def main():
    n = int(input())
    arr = list(map(int, input().split()))
    cnt = {}
    for num in arr:
        if valid(num):
            if num in cnt:
                cnt[num] += 1
            else:
                cnt[num] = 1
    for num in cnt:
        print(num, cnt[num])
        
if __name__ == "__main__":
    main()

# 10
# 2 4 7 5 7 8 9 3 7 2