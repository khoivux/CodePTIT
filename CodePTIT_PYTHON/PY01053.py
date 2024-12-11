
def main():  
    t = int(input())
    for _ in range(t):
        n = input()
        if n % 3 == 0:
            print('YES')
        else:
            print('NO')
main()