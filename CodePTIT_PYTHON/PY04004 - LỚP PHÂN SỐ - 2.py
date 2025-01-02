import math

class Phanso:
    def __init__(self, tu, mau):
        self.tu = tu
        self.mau = mau
    
    def rutgon(self):
        uoc = math.gcd(self.tu, self.mau)
        self.tu //= uoc
        self.mau //= uoc
        return self

    def tong(self, other):
        tong_tu = self.tu * other.mau + self.mau * other.tu
        tong_mau = self.mau * other.mau
        return Phanso(tong_tu, tong_mau).rutgon()
    def out(self):
        print(f"{self.tu}/{self.mau}")

def main():
    arr = list(map(int, input().split()))
    p1 = Phanso(arr[0], arr[1])
    p2 = Phanso(arr[2], arr[3]) 
    p1.tong(p2).out()

if __name__ == "__main__":
    main()