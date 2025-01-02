def convert(binary_str, base):
    decimal_value = int(binary_str, 2)
    if base == 2:
        return binary_str
    elif base == 4:
        return format(decimal_value, 'o').replace('8', '') 
    elif base == 8:
        return format(decimal_value, 'o') 
    elif base == 16:
        return format(decimal_value, 'X')  

def main():
    with open("DATA.in", "r") as file:
        data = file.read().strip().split("\n")
    
    t = int(data[0])  
    index = 1
    res = []
    for _ in range(t):
        b = int(data[index])  
        binary_str = data[index + 1]  
        index += 2

        result = convert(binary_str, b)
        res.append(result)

    for res in res:
        print(res)

if __name__ == "__main__":
    main()
