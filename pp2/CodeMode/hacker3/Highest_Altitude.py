n = list(map(int, input().split()))
k = []
n.insert(0,0)
# n.append(0)
d = 0
for i in range(len(n)):
    d = d + n[i]
    k.append(d)
print(max(k))
