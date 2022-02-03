def ff(n):
    a = 1
    for i in range(1, n+1, 1):
        a = a * i
    return a

b = list(map(int, input().split()))
n = int(input())
cnt = 0
for i in b:
    if i > ff(n): cnt = cnt + 1

print(cnt)