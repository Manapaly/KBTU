def distance(x1, y1, x2, y2 ):
    #print("{:.5f}".format(((x2-x1)**2+(y2-y1)**2)**0.5))
    return round((((x2-x1)**2+(y2-y1)**2)**0.5),5)

mylist = []
for i in range(1, 9999999):
    mylist.append(float(i))

a = int(input())
b = int(input())
c = int(input())
d = int(input())
e = distance(a, b, c, d)

if e in mylist:
    print(int(e))
else:
    print(e)
