s="@gmail.com"
a = int(input())

def ff(ss):
    global s
    for i in range(len(s)):
        if len(ss)<11: 
            return False
        if ss[len(ss) - 10 + i] != s[i]: 
            return False
    return True

for ii in range(0, a):
    b = str(input())
    if ff(b)==True: 
        print(b[0 : len(b) - 10])