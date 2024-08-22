def isTrue(n): #i <= i + 1
    c = n[0]
    for i in range(1, len(n)):
        if n[i] < n[i - 1]:
            return False
    return True

def main():
    t = int(input())
    for i in range(t):
        n = str(input())
        if isTrue(n):
            print('YES')
        else:
            print('NO')
main()