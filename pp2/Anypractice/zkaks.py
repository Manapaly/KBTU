k = list(map(int, input().split()))

pos = len(k) - 1

for i in range(len(k)-1-1, -1 ,-1):
    if i + k[i] >= pos:
        pos = i

if pos == 0:
    print(1)
else:
    print(0)