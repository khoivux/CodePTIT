import math

def get_zodiac(day, month):
    # Danh sách các cung Hoàng Đạo và khoảng thời gian của chúng
    zodiacs = [
        ("Bach Duong", (3, 21), (4, 19)),
        ("Kim Nguu", (4, 20), (5, 20)),
        ("Song Tu", (5, 21), (6, 20)),
        ("Cu Giai", (6, 21), (7, 22)),
        ("Su Tu", (7, 23), (8, 22)),
        ("Xu Nu", (8, 23), (9, 22)),
        ("Thien Binh", (9, 23), (10, 22)),
        ("Thien Yet", (10, 23), (11, 22)),
        ("Nhan Ma", (11, 23), (12, 21)),
        ("Ma Ket", (12, 22), (1, 19)),
        ("Bao Binh", (1, 20), (2, 18)),
        ("Song Ngu", (2, 19), (3, 20)),
    ]
    for cung, start, end in zodiacs:
        start_month, start_day = start
        end_month, end_day = end
        if (month == start_month and day >= start_day) or (month == end_month and day <= end_day) :
            return cung
    return None
def main():
    for t in range(int(input())):
        day, month = map(int, input().split())
        print(get_zodiac(day, month))

if __name__ == "__main__":
    main()