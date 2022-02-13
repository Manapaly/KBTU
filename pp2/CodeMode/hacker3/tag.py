n = int(input())

mylist = []
for i in range(n):
    a = list(map(str, input().split()))
    mylist.append(a)

mylist.sort(key=lambda x: (-len(x),len(x[0]),x[0]))
for i in mylist:
    print(*i)
