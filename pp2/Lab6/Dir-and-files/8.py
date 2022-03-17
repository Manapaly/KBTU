import os

file = 'D:\pp\pp2\Lab6\Dir-and-files\check_for8'
if os.access(file, os.F_OK)==True:
    os.remove(file)
else:
    print('Такого файла нет')