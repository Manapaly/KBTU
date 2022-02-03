a = list(map(int, input().split()))

for i in range(0, len(a), 1):
    b = a[0:i]
    c = a[i+1:len(a)]
    if sum(b)==sum(c):
        print(i) 
        exit(0)
print(-1)
