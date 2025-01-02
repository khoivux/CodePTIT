def solve(a, b):
    for i in range(len(a) - 1):
        if abs(ord(a[i]) - ord(a[i + 1])) != abs(ord(b[i]) - ord(b[i +1])):
            return 'NO'
    return 'YES'
def main():
    for t in range(int(input())):
        s = input()
        print(solve(s, s[::-1]))                                         
main()
# 2
# acxz
# bcxz