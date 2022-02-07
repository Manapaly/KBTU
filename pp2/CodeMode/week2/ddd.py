n = list(map(int, input().split()))
ok = False
if(len(n)<3):
    ok = False
    print("No")
    exit()
for i in range(len(n)-2):
    if n[i]<n[i+1] and n[i+1]>n[i+2]: ok=True
if ok == False: print("No")
else: print("Yes")