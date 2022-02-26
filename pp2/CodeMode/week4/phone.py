from ast import pattern
import re

s = input()

pattern = r'[789]\d{9}$'

print(re.match(pattern, s))