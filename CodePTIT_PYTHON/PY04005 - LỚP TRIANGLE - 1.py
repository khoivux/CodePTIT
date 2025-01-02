import math

class Point:
    def __init__(self, x, y):
        self.x = x
        self.y = y
    def distance(self, other):
        return math.sqrt((self.x - other.x) ** 2 + (self.y - other.y) ** 2)

def valid(a, b, c):
    if a + b <= c or b + c <= a or a + c <= b:
        return False
    return True

def main():
    arr = []
    t = int(input())
    for i in range(t):
        arr += list(map(float, input().split()))
    i = 0
    for loop in range(t):
        a = Point(arr[i], arr[i + 1])
        b = Point(arr[i + 2], arr[i + 3])
        c = Point(arr[i + 4], arr[i + 5])
        ab = a.distance(b)
        bc = b.distance(c)
        ca = c.distance(a)
        if valid(ab, bc, ca):
            print(f"{ab + bc + ca:.3f}")
        else:
            print("INVALID")
        i += 6

if __name__ == "__main__":
    main()