import math

class ThiSinh:
    def __init__(self, ten, ns, diem1, diem2, diem):
        self.ten = ten
        self.ns = ns
        self.diem1 = diem1
        self.diem2 = diem2
        self.diem = diem
    
    def sum(self):
        return self.diem1 + self.diem2 + self.diem
    
    def __str__(self):
        return f"{self.ten} {self.ns} {self.sum():.1f}"

def main():
    print(ThiSinh(input(), input(), float(input()), float(input()), float(input())))
if __name__ == "__main__":
    main()