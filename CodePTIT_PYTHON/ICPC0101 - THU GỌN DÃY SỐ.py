def main():
    stack = []
    n = int(input())
    arr = list(map(int, input().split()))
    for i in (arr):
        if not stack:
            stack.append(i)
        else:
            x = stack[-1]
            if (x + i) % 2 == 0:
                stack.pop()
            else: 
                stack.append(i)
    print(len(stack))
main()
# 5
# 2 3 4 5 6
# 10
# 1 5 5 8 6 4 3 5 9 3