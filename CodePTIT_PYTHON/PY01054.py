for _ in range(int(input())):
    n = input()
    res = 1
    for i in n:
        if(i != '0'):
            res *= int(i)
    print(res)
    