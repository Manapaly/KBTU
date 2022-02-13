n = int(input())

mylist = []
for i in range(n):
    a = list(map(str, input().split()))
    b = list(a[1:len(a)])
    b.sort(key = lambda x: (len(x),x))
    b.insert(0,a[0])
    mylist.append(b)

mylist.sort(key=lambda x: (-len(x),x[0]))
for i in mylist:
    print(*i)
# print(*mylist)
