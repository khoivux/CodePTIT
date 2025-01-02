import math
from datetime import datetime
class TramDo:
    def __init__(self, ma, ten, thoi_gian, luong_mua):
        self.ma = ma
        self.ten = ten
        self.thoi_gian = thoi_gian
        self.luong_mua = luong_mua
    def trung_binh(self):
        return float(self.luong_mua / self.thoi_gian)
    def __str__(self):
        return f"{self.ma} {self.ten} {self.trung_binh():.2f}"

def main():
    fmt = '%H:%M'
    ds = {}
    cnt = 0
    for i in range(int(input())):
        ma = f"T{cnt + 1:02d}"
        ten = input()
        tg_b = datetime.strptime(input(), fmt)
        tg_k = datetime.strptime(input(), fmt)
        lm = float(input())
        distance = (tg_k - tg_b).total_seconds() / 3600
        if ten not in ds:
            cnt += 1
            ds[ten] = TramDo(ma, ten, distance, lm)
        else:
            ds[ten] = TramDo(ds[ten].ma, ten, ds[ten].thoi_gian + distance, ds[ten].luong_mua + lm)
    for td in ds.values(): print(td)
if __name__ == "__main__":
    main()