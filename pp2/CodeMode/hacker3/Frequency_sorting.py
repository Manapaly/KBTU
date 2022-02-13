
s = input()

dict = {}
for i in range(len(s)):
    if s[i] not in dict:
        dict[s[i]]=1
    else:
        dict[s[i]] += 1
mylist = list(dict.items())
mylist.sort(key = lambda x: -x[1])
for i in mylist:
    print(i[0]*i[1],end = '')