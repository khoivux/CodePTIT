import math



def main():
    se1 = set(list(map(str, input().lower().split())))
    se2 = set(list(map(str, input().lower().split())))

    u = se1.union(se2)
    i = se1.intersection(se2)
    uni = sorted([x for x in u]) 
    it = sorted([x for x in i])
    for i in uni: print(i, end = ' ')
    print()
    for i in it: print(i, end = ' ')
if __name__ == "__main__":
    main()