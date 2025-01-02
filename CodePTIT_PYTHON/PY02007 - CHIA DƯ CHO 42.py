def main(): 
    se = set()
    cnt = 10
    while cnt != 0:
        arr = list(map(int, input().split()))   
        cnt -= len(arr)
        for i in arr:
            se.add(i % 42)
    print(len(se))    
main()
