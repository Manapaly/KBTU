n = int(input())
b = []
b.append(0)
b.append(1)
for i in range(2,n+1):
    b.append(b[i-1]+b[i-2])
print(b)