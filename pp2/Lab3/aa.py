arr1 = ['p','y','t','h','o','n',' ','3','.','0']
arr2 = ['p','y','d','e','v',' ','2','.','0']
out = list(filter(lambda it: it in arr1, arr2))
print(out)