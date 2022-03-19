import re

pattern = r'(0[1-9]|1[0-2])[/-](0[1-9]|1[0-9]|2[0-9]|3[0-1])'

for i in range(4):
    s=input()
    if re.match(pattern, s):
        print('iu')
    else:
        print('no')