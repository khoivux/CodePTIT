from functools import cmp_to_key
import math

class SV:
    def __init__(self, name, ac, submit):
        self.name = name
        self.ac = ac
        self.submit = submit
     
    def cmp(a, b):
        if a.ac < b.ac: return 1
        elif a.ac > b.ac: return -1
        else: 
            if a.submit < b.submit: return -1
            elif a.submit > b.submit: return 1
            else:
                return a.name < b.name
def main():
    n = int(input())
    sv = []
    for i in range(n):
        name = input()
        ac, submit = input().split()
        sv.append(SV(name, int(ac), int(submit)))
    sv.sort(key=cmp_to_key(SV.cmp))
    for i in sv:
        print(i.name, i.ac, i.submit)
if __name__ == "__main__":
    main()