a = list(map(int, input().split()))

for i in range(len(a)-1):
    s=(a[i]+a[i+1])/2
    print(s, end = " ")
    