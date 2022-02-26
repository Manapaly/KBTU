import json

f = open('sample-data.json','r')
temp = f.read()
l = open('a.txt', 'r')
a = l.read()
dd = json.loads(temp)
print(a)
for i in dd['imdata']:
    print(i["l1PhysIf"]["attributes"]["dn"] ,' '*29 ,i["l1PhysIf"]["attributes"]['speed'],' ' ,i["l1PhysIf"]["attributes"]['mtu'])

