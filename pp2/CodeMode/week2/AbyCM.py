arr = list(set(i) for i in input().split())
s = arr[0]
for i in arr:
    s = s.intersection(i)
print(*sorted(s), sep='')