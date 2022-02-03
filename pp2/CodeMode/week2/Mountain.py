b = list(map(int, input().split()))

for i in range(len(b)-1):
    if(b[i+1]>b[i]):
        k = i

print(k)
