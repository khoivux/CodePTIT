import math

def trans(s) :
    n = 0
    for i in s : n += ord(i) - ord('0')
    return str(n)

def main():
    s = input()
    res = 0
    while(len(s) > 1) :
        s = trans(s)
        res += 1
    print(res)

if __name__ == "__main__":
    main()