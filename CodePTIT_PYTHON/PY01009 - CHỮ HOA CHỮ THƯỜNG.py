def main():    
    s = input()
    cntH = int(0)
    for char in s:
        if char == char.upper():
            cntH += 1
    cntT = len(s) - cntH
    if(cntT >= cntH):
        print(s.lower())
    else:
        print(s.upper())
main()