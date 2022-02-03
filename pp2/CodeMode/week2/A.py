a = list(map(str, input().split()))
asa = len(a)
b = []
def ff(s):
    myset = set()
    for i in s:
        myset.add(i)
    global b
    for i in myset:
        b.append(i)

for i in a:
    ff(i)
e = set()

for i in b:
    if b.count(i)==asa: e.add(i)
b = sorted(e)
for i in b:
    print(i, end="")
