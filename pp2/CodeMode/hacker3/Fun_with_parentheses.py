s = input()
mylist = []
cnt = 0
cnt1 = 0
for i in range(len(s)-1):
    if s[i]=='(' and s[i+1]=='(':
        cnt +=1
    else:
        mylist.append(cnt)
        cnt = 0
    if s[i] == '(' and s[i+1]==')' :
        cnt1 +=1
# print(mylist)
# print(cnt1)
sum1 = 0
sum = 0
for i in mylist:
    if i != 0:
        sum1 = sum1 + 3**i
sum = cnt1-(len(mylist)-mylist.count(0))

print(sum1+sum)
