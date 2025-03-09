import math



def main():
    for t in range(int(input())):
        s = input()
        res = []
        sum = 0
        for i in s:
            try:
                sum += int(i)
            except Exception as e:
                res.append(i) 
        res.sort(key=lambda x: x)
        print(''.join(res) + str(sum))


if __name__ == "__main__":
    main()