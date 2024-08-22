def valid(n):
    set1 = set()
    for char in n: set1.add(char)
    if len(set1) != 2:
        return False
    for i in range(0, len(n) - 2):
        if i > len(n) - 1: break
        if(n[i] != n[i + 2]):
            return False
    return True

def main():
    t = int(input())
    for _ in range(t):
        n = input()
        if valid(n):
            print('YES')
        else:
            print('NO')
main()