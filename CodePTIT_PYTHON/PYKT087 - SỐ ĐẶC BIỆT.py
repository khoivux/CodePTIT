import math
mod = 10 ** 9 + 7
def solve(n, k): 
    ans = 0  
    res = 1  
    while (k > 0):  
        if ((k & 1) == 1):  
            ans = ans + res  
            ans %= mod  
        
        res = (res * n) % mod 
        k = k // 2 
    return ans  

def main():
    for t in range(int(input())):
        n, k = map(int, input().split())
        print(solve(n, k))
if __name__ == "__main__":
    main()

