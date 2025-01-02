import math

class KhachHang:
    def __init__(self, ma, ten, cso_cu, cso_moi):
        self.ma = ma
        self.ten = ten
        self.cso_cu = cso_cu
        self.cso_moi = cso_moi
    
    def hoa_don(self):
        s = self.cso_moi - self.cso_cu
        if s <= 50:
            s *= 100
            s += s * 0.02
        elif s <= 100:
            s = 50 * 100 + (s - 50) * 150
            s += s * 0.03
        else:
            s = 50 * 100 + 50 * 150 + (s - 100) * 200
            s += s * 0.05
        return round(s)
    def __str__(self):
        return f"{self.ma} {self.ten} {self.hoa_don()}"
def main():
    ds = []
    for i in range(int(input())):
        ds.append(KhachHang(f"KH{i + 1:02d}", input(), int(input()), int(input())))
    ds.sort(key = lambda x : -x.hoa_don())
    for kh in ds: print(kh)

if __name__ == "__main__":
    main()