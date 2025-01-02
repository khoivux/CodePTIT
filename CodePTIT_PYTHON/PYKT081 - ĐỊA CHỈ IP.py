import math



def main():
    for t in range(int(input())):
        try:
            arr = list(map(int, input().split('.')))
        except Exception as e:
            print("NO")
            continue

        Max = max(arr)
        Min = min(arr)
        if Min < 0 or Max > 255 or len(arr) != 4:
            print("NO")
        else:
            print("YES")
    
if __name__ == "__main__":
    main()