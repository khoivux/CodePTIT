def valid(n):
    if len(n) < 3:
        return False
    id1 = int(0)
    id2 = len(n) - 1
    left = int(0)
    right = int(0)

    if n[0] >= n[1] or n[-1] > n[-2]: return False 

    while n[id1] < n[id1 + 1]: id1 += 1
    while n[id2] < n[id2 - 1]: id2 -= 1
    
    if id1 == id2: return True

def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        if valid(str(n)):
            print('YES')
        else:
            print('NO')
main()