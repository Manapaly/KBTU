n = int(input())
mylist = []
m = {}
for i in range(n):
    city = input()
    k = int(input())
    jj = []
    for j in range(k):
        a = input().split()
        jj.append(a)
    m[city] = jj
spos = input()
result = []
# print(m)
for i,j in m.items():
    for k in range(len(j)):
        # print(j[k])
        if j[k][1]==spos: 
            # result.append('(' + j[k][0] +' , ' + i + ')')
            u = []
            u.append(j[k][0])
            u.append(i)
            result.append(tuple(u))

for i in result:
    print(i)
# print(*result, end = '/n')
