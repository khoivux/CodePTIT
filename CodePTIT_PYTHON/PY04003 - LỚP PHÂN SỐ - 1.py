import math

class Phanso:
    def __init__(self, tu, mau):
        self.tu = tu
        self.mau = mau
    
    def rutgon(self):
        uoc = math.gcd(self.tu, self.mau)
        self.tu //= uoc
        self.mau //= uoc
    def out(self):
        self.rutgon()
        print(f"{self.tu}/{self.mau}")

def main():
    p = Phanso(*map(int, input().split()))
    p.out()

if __name__ == "__main__":
    main()