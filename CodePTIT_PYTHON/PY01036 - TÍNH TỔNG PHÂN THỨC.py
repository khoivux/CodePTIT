def solve(n, x):
    if(x == 0): x = 2
    sum = float(0)
    for i in range(x, n + 1, 2):
        sum += float(1 / i)
    return sum

def main():
    t = int(input())
    for i in range(t):
        n = int(input())
        print(f"{solve(n, n % 2):.6f}")

main()