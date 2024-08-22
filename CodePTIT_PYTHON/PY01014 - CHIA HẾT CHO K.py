from math import * 
a, k, n = map(int, input().split()) 
so = int(n / k) 
check = False 
for i in range(1,so+1): 
    if k * i - a <= n - a and k * i - a > 0 :
         print(k * i - a, end = " ") 
         check = True 
if check == False : print("-1")