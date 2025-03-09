import math

def validate(s):
    if s.count('6') + s.count('8') != len(s): 
        return 'NO'
    if s.count('888'):
        return 'NO'
    return 'YES'

def main():
    s = input()
    print(validate(s))
if __name__ == "__main__":
    main()