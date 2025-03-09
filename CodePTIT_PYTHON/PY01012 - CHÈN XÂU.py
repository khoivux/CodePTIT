import math



def main():
    s = input()
    t = input()
    id = int(input()) - 1
    print(s[:id] + t + s[id:])

if __name__ == "__main__":
    main()