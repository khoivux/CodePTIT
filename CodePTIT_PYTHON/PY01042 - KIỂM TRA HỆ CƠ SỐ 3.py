def valid(n):
    for char in n:
         if char != '0' and char != '1' and char != '2':
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