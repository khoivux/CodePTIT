import math

def main():
    for t in range(int(input())):
        n = int(input())
        arr = list(map(int, input().split()))
        
        st, res = [], [0] * n
        for i in range(n):
            while len(st) > 0 and arr[st[-1]] <= arr[i]:
                st.pop()
            res[i] = i + 1 if len(st) == 0 else i - st[-1]
            st.append(i)
        print(*res)

if __name__ == "__main__":
    main()
