
n = input().split()
rr = l
for i in n:
    for j in range(len(i)):
        if ord(i[j])>=ord('0') and ord(i[j])<=ord('9'):
            rr[ord(i[j])-ord('0')] =  i
print(rr)

"""
n = input().split()
dict = {}
for i in n:
    for j in range(len(i)):
        if ord(i[j])>=ord('0') and ord(i[j])<=ord('9'):
            dict[int(i[j])]= i

print(dict)
"""