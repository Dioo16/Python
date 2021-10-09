import re
atRegex = re.compile(r'.at')
print(atRegex.findall('The cat in the hat sat on the flat mat.')) #o '' . '' serve para verificar qualquer palavra que tenha certa parte da
# instância como verdadeira e nesse caso adcionada.

nameRegex = re.compile(r'First Name: (.*) Last Name: (.*)')
mo = nameRegex.search('First Name: Al Last Name: Sweigart')
print(mo.group())

nongreedyRegex = re.compile(r'<.*?>')
mo = nongreedyRegex.search('<To serve man> for dinner.>')
print(mo.group())
greedyRegex = re.compile(r'<.*>')
mo = greedyRegex.search('<To serve man> for dinner.>')
print(mo.group())
