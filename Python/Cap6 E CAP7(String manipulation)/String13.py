import re
name = re.compile(r'\d\d/\d\d/\d\d\d\d')
phrase = input()
cpharase = name.search(phrase)
print(cpharase.group())

#Data de nascimento