import json

f = open('task1.json','r')
temp = f.read()

dd = json.loads(temp)

dd['videocard'] = 'rtx 3050i'
y = json.dumps(dd, indent=4)
with open('task1.json', 'w') as f:
    f.write(y)
print(dd)