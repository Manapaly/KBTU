a,b = map(int,input().split())

s = str(a)
sum = 0
for i in range(len(s)):
    sum = sum + int(s[i])**b
    b = b+1
if sum%a==0:
    print(sum//a)
    exit()
print(-1)