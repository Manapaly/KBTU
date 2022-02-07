set1 = set()
set2 = set()
for i in range(int(input())):
    a,b = input().split()
    set1.add(a)
    set1.add(b)
    set2.add(a)
print(*set1.difference(set2))