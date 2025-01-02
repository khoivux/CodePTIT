import math

def diem(correct_answers):
    band_mapping = [
        (range(39, 41), 9.0),
        (range(37, 39), 8.5),
        (range(35, 37), 8.0),
        (range(33, 35), 7.5),
        (range(30, 33), 7.0),
        (range(27, 30), 6.5),
        (range(23, 27), 6.0),
        (range(20, 23), 5.5),
        (range(16, 20), 5.0),
        (range(13, 16), 4.5),
        (range(10, 13), 4.0),
        (range(7, 10), 3.5),
        (range(5, 7), 3.0),
        (range(3, 5), 2.5),
    ]
    for score_range, band in band_mapping:
        if correct_answers in score_range:
            return band
def convert(diem):
    diemInt = float(int(diem))
    dif = diem - diemInt
    if dif < 0.25: return diemInt
    elif dif < 0.75: return diemInt + 0.5
    else: return diemInt + 1.0
def main():
    for t in range(int(input())):
        arr = list(map(str, input().split()))
        read, lis = float(diem(int(arr[0]))), float(diem(int(arr[1])))
        spea, wri = float(arr[2]), float(arr[3])
        res = (read + lis + spea + wri) / 4
        print(f"{convert(res):.1f}")
if __name__ == "__main__":
    main()