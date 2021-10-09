import re
phonenumRegex = re.compile(r'\d\d\d-\d\d\d-\d\d\d\d')
mo = phonenumRegex.search("My number is 415-555-4242.")
print("phone number found: " + mo.group())


phonenumRegex = re.compile(r'(\d\d\d)-(\d\d\d-\d\d\d\d)')
mo = phonenumRegex.search("My number is 415-555-4242.")
print("phone number found: " + mo.group(2)) # Separando por grupos, utilizando o parêntese

areacode, mainumber = mo.groups()
print(areacode)
print(mainumber)


phoneNumRegex = re.compile(r'(\(\d\d\d\)) (\d\d\d-\d\d\d\d)')
mo = phoneNumRegex.search('My phone number is (415) 555-4242.')
print(mo.group(1))