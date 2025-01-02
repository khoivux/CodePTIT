import math

def cost(loai_xe, so_ghe):
    if loai_xe == 'Xe_con':
        if so_ghe == 5: return 10000
        else: return 15000
    if loai_xe == 'Xe_tai' and so_ghe == 2: return 20000
    if loai_xe == 'Xe_khach':
        if so_ghe == 29: return 50000
        else: return 70000

def main():
    ds = {}
    for t in range(int(input())):
        arr = list(map(str, input().split()))
        if arr[3] == 'OUT': continue
        bill = cost(arr[1], int(arr[2]))
        if arr[-1] not in ds:
            ds[arr[-1]] = bill
        else:
            ds[arr[-1]] += bill
    for tke in ds.keys():
        print(f"{tke}: {ds[tke]}")

if __name__ == "__main__":
    main()