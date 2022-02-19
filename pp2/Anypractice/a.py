mylist = list(map(int, input().split()))

set1 = set()

for i in mylist:
    set1.add(i)

mylist1 = list(set1)
print(mylist1[1])