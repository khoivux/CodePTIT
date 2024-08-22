import math


def valid(s):
    sum = int(0)
    for i in range(0, int(len(s))):
        sum += int(s[i])
        if i >= 1:
            if math.fabs(int(s[i]) - int(s[i - 1])) != 2.0:
                return False
    if sum % 10 != 0:
        return False
    return True
def main():
    t = int(input())
    for _ in range(t):
        s = input()
        if valid(s):
            print('YES')
        else:
            print('NO')
main()