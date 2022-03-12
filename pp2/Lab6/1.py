#1 Python program with builtin function to multiply all the numbers in a list
import numpy as np
def func1(mylist):
    print(np.prod(mylist))
func1([1,2,3,4,5])
# func1([0,1,2,3,4])

print('-'*50)
#2 Python program with builtin function that accepts a string and calculate the number of upper case letters and lower case letters
def func2(s):
    count1 = 0
    count2 = 0
    for i in s:
        if i.islower():
            count1+=1
        elif i.isupper():
            count2+=1
    print(f'The number of lower case letters is {count1}')
    print(f'The number of upper case letters is {count2}')
func2('Abcerf')
# func2('aaaaaaaaa')
print('-'*50)

#3 Python program with builtin function that checks whether a passed string is palindrome or not.
def func3(s):
    if s=="".join(reversed(s)):
        print('Polindrome')
    else:
        print('not Polindrome')
func3('aaba')
func3('aba')
func3('Aba')
print('-'*50)