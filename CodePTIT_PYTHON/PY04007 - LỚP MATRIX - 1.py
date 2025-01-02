import math

class Matrix:
    def __init__(self, rows, cols, data):
        self.rows = rows
        self.cols = cols
        self.data = data
    def transpose(self):
        transposed = [[self.data[j][i] for j in range(self.rows)] for i in range(self.cols)]
        return Matrix(self.cols, self.rows, transposed)
    
    def multiply(self, other):
        result = [[sum(self.data[i][k] * other.data[k][j] for k in range(self.cols)) 
                   for j in range(other.cols)] for i in range(self.rows)]
        return Matrix(self.rows, other.cols, result)
    
    def __str__(self):
        return "\n".join([" ".join(map(str, row)) for row in self.data])
    
def main():
    for _ in range(int(input())):
        n, m = map(int, input().split())
        data = [list(map(int, input().split())) for _ in range(n)]
        matrix = Matrix(n, m, data)
        print(matrix.multiply(matrix.transpose()))
              
if __name__ == "__main__":
    main()