import re
pattern = r'([a-zA-Z0-9])\1+'
s = input() 
ans  = re.search(pattern, s)
if ans:
    print(ans.group(1))
else:
    print(-1)
# print(re.search(pattern, s)[1])