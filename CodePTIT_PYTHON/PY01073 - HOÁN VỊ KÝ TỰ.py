from itertools import permutations

def main():
    s = input()
    for per in permutations(s):
        print(''.join(per))
main()