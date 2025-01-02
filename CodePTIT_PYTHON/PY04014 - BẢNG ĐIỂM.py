import math

class HocSinh:
    def __init__(self, ma,ten, bang_diem):
        self.ma = ma
        self.ten = ten
        self.bang_diem = bang_diem
    
    def gpa(self):
        x = 2 * self.bang_diem[0] + 2 * self.bang_diem[1]
        for i in range(2, 10) :
            x += self.bang_diem[i]        
        return x / 10 / 1.2
    
    def rank(self):
        x = self.gpa()
        if x < 5 : return 'YEU'
        elif x < 7 : return 'TB'
        elif x < 8 : return 'KHA'
        elif x < 9 : return 'GIOI'
        else : return  'XUAT SAC'

    def __str__(self):
        return f"{self.ma} {self.ten} {self.gpa():.1f} {self.rank()}"
def main():
    ds = []
    for i in range(int(input())):
        hs = HocSinh(f"HS{i + 1:02d}", input(), list(map(float, input().split())))
        ds.append(hs)
    ds.sort(key=lambda x : (-x.gpa(), x.ma))
    for hs in ds: print(hs)
if __name__ == "__main__":
    main()