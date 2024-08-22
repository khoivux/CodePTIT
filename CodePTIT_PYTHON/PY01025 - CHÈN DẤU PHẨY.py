s = input()
res = ''
for i in range(1, len(s) + 1):
    res = s[-i] + res
    if i % 3 == 0 and i != len(s):
        res = ',' + res
print(res)