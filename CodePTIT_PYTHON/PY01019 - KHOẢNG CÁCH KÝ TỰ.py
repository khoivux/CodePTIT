import math

def valid(s1, s2):
    for i in range(1, int(len(s1))):
        x1 = int(math.fabs(ord(s1[i]) - ord(s1[i - 1]) ))
        x2 = int(math.fabs(ord(s2[i]) - ord(s2[i - 1])))
        if x1 != x2:
            return False
    return True

def main():
    t = int(input())
    for i in range(t):
        s1 = input()
        s2 = s1[::-1]
        if valid(s1, s2):
            print('YES')
        else:
            print('NO')
main()