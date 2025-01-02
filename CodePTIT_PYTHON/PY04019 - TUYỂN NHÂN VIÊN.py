import math

class NhanVien:
    def __init__(self, ma, ten, diem_lt, diem_th):
        self.ma = ma
        self.ten = ten
        if diem_lt > 10: diem_lt /= 10
        if diem_th > 10: diem_th /= 10
        self.diem_lt = diem_lt
        self.diem_th = diem_th
        self.diem_tb = (self.diem_lt + self.diem_th) / 2

    def rank(self):
        if self.diem_tb < 5: return 'TRUOT'
        elif self.diem_tb < 8: return 'CAN NHAC'
        elif self.diem_tb <= 9.5: return 'DAT'
        else: return 'XUAT SAC'
    
    def __str__(self):
        return f"{self.ma} {self.ten} {self.diem_tb:.2f} {self.rank()}"
def main():
    ds = []
    for i in range(int(input())):
        ds.append(NhanVien("TS0" + str(i + 1), input(), float(input()), float(input())))
    ds.sort(key = lambda x : -x.diem_tb)
    for nv in ds: print(nv)
if __name__ == "__main__":
    main()