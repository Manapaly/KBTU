
n = int(input())
A = []
for i in range(n):
    b = list(map(int,input().split()))
    A.append(b)
result = []
for j in range(n):
    d = []
    for f in range(n):
        d.append(0)
    result.append(d)

for i in range(len(A)):
    for j in range(len(A[0])):
        for k in range(len(A)):
            result[i][j] += A[i][k] * A[k][j]
if(A == result):
    print('Good matrix')
    exit()
print("Bad matrix")