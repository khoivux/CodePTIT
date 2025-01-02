import math
from datetime import datetime
class Gamer:
    def __init__(self, ma, ten, gio_vao, gio_ra):
        self.ma = ma
        self.ten = ten
        self.gio_vao = gio_vao
        self.gio_ra = gio_ra
        self.thoi_gian_choi = (self.gio_ra - self.gio_vao).total_seconds()
   
    def in_thoi_gian_choi(self):
        time = int(self.thoi_gian_choi)
        hour = time // 3600
        minute = (time % 3600) // 60
        return f"{hour} gio {minute} phut" 
    
    def __str__(self):
        return f"{self.ma} {self.ten} {self.in_thoi_gian_choi()}"
def main():
    fmt = '%H:%M'
    ds = []
    for _ in range(int(input())):
        ma = input()
        ten = input()
        gio_vao = datetime.strptime(input(), fmt)
        gio_ra = datetime.strptime(input(), fmt)
        ds.append(Gamer(ma, ten, gio_vao, gio_ra))
    ds.sort(key = lambda x : -x.thoi_gian_choi)
    for g in ds: print(g)
if __name__ == "__main__":
    main()