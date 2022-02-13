s = input()
k = int(input())
# result = [[0 for i in range(len(s))] for j in range(k)]
s = s*k
print(s)
res = ''
# print(result)
m = 0
for i in range(len(s)//k):
    res = res + s[(i+m)%len(s)-1]
    m=m+k
print(res)
