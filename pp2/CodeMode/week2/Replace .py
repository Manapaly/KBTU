n = list(map(str, input().split()))

for i in n:
    for j in i.lower():
        if ord(j)>96 and ord(j)<123: print(ord(j)-96, end=" ")