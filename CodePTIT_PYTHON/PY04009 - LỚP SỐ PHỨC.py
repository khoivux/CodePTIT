import math

class Sophuc:
    def __init__(self, real, imag):
        self.real = real
        self.imag = imag
    def tong(self, other):
        return Sophuc(self.real + other.real, self.imag + other.imag)
    
    def tich(self, other):
        real = self.real * other.real - self.imag * other.imag
        imag = self.real * other.imag + self.imag * other.real
        return Sophuc(real, imag)
    
    def __str__(self):
        return f"{self.real} + {self.imag}i"
def main():
    for _ in range(int(input())):
        arr = list(map(int, input().split()))
        a = Sophuc(arr[0], arr[1])
        b = Sophuc(arr[2], arr[3]) 
        c = a.tong(b).tich(a)
        d = (a.tong(b)).tich(a.tong(b))
        print(f"{c}, {d}")

if __name__ == "__main__":
    main()