import math

class DienThoai:
    def __init__(self, ten, sdt, ngay):
        self.ten = ten
        self.sdt = sdt
        self.ngay = ngay
    
    def getstr(self):
        return self.ten + ': ' + self.sdt + ' ' + self.ngay

def main():
    ds = []
    file = open('SOTAY.txt', 'r')
    inp = file.read().split('\n')
    while len(inp) > 0:
        tmp = inp[0]
        inp.pop(0)
        if tmp[:4:] == 'Ngay':
            ngay = tmp.split(' ')[1]
        elif len(inp) > 0:
            sdt = inp[0]
            inp.pop(0)
            ds.append(DienThoai(tmp,  sdt, ngay)) 
    ds.sort(key=lambda x: (x.ten.split()[-1], x.ten))
    file.close()
    ot = open('DIENTHOAI.txt', 'w')
    for i in ds : 
        ot.write(i.getstr() + '\n')
    ot.close()
    
if __name__ == "__main__":
    main()