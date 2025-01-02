import math



def main():
    for t in range(int(input())):
        s = input()
        if s[0] == s[-1]:
            print('YES')
        else:
            print('NO')

if __name__ == "__main__":
    main()