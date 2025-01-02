from itertools import combinations

def main():
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))
    arr = sorted(set(arr))
    combs = combinations(arr, k)
    for comb in combs:
        print(" ".join(map(str, comb)))
main()
