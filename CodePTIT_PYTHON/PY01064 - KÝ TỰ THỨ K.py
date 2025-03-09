import math

def find(n, k) :
    if k == 2**(n - 1) : return n
    if k > 2**(n - 1) : return find(n - 1, k - 2**(n - 1))
    return find(n - 1, k)

def main():
    for i in range(int(input())) :
        n, k = [int(x) for x in input().split()]
        print(chr(find(n, k) + ord('A') - 1))

if __name__ == "__main__":
    main()