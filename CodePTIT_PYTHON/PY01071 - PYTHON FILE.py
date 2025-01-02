def valid(s):
    if s[-3::] != ".py":
        return 'no'
    return 'yes'
def main():
    s = input()
    print(valid(s.lower()))
main()