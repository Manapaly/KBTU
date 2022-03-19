import datetime

a = datetime.date.today()
b = datetime.date.today().replace(month=1, day=1)  
ans = (a - b).days
print(a)
print(b)
print(ans)