import re

def main():
    s = ''
    regex = r'[\.!?]'
    while True:
        try:
            s += input()  
        except EOFError:
            break 
    
    s = re.split(regex, s)
    for i in s:
        x = i.strip().lower().split()
        if x:
            x[0] = x[0].title()
        print(*x)    
if __name__ == "__main__":
    main()