def isTrue(s):
    # if(len(s) % 2 == 0 or len(s) < 2):
    #     return False
    
    for char in s:
        if(char != '0' and char != '2' and char != '4' and char != '6' and char != '8'):
            return False
        
    if(s != s[::-1]):
        return False
    
    return True

def main():
    t = int(input())
    for i in range(t):
        n = int(input())
        if isTrue(str(n)):
                print(n, end = ' ')
        # for j in range(2, n):
        #     if isTrue(str(j)):
        #         print(j, end = ' ')
        print()
main()