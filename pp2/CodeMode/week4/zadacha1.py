import re

with open('raw.data','r', encoding='utf-8') as f:
    text = f.read()
def to_int(s):
    st = ""
    for i in s:
        if i==',':
            break
        else:
            st = st + i
    return st

# print(text)
# pattern = r'(БИН) (\d{12})'
# print(re.search(pattern, text).group(2))
pattern = r'Стоимость\n(.+)'
res = re.findall(pattern, text)
for i in res:
    print(to_int(i))

print(*res)