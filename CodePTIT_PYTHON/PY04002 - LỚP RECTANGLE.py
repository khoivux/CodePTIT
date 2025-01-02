import math

class Rectangle:
    def __init__(self, length, width, color):
        self.length = length
        self.width = width
        self.color = color[0:1:].upper() + color[1::].lower()
    
    def out(self):
        if self.length > 0 and self.width > 0:
            print((self.length + self.width) * 2, self.length * self.width, self.color)
        else:
            print("INVALID")
def main():
    arr = input().split()
    r = Rectangle(int(arr[0]), int(arr[1]), arr[2])
    r.out()
main()
