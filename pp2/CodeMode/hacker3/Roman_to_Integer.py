s = input()
s = s + 'u'
def ff(s):
    if s=='u': return 0
    if s=='IV': return 4
    if s=='IX': return 9
    if s=='XL': return 40
    if s=='XC': return 90
    if s=='CD': return 400
    if s=='CM': return 900
    if s=='I': return 1
    if s=='V': return 5
    if s=='X': return 10
    if s=='L': return 50
    if s=='C': return 100
    if s=='D': return 500
    if s=='M': return 1000
    else: return False
sum = 0
m = 0
for i in s:
    for i in range(m,len(s)-1):
        k = s[i] + s[i+1]
        if ff(k)==False:
            sum = sum + ff(s[i])
            m = m+1
            break
        else:
            sum = sum + ff(k)
            k = ""
            m = m+2
            break

print(sum)
