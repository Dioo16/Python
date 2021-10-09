import re
heroRegex = re.compile(r'Batman|Tina Fey')  #O PIPE '|' ENCONTRA O PRIMEIRO ARGUMENTO ENCERRA SE FOR IGUAL, EX ? BAT PRIMEIRO ENCONTRA BAT
mo1 = heroRegex.search('Batman and Tina Fey.') # NO segundo e tina fey, nesse caso ele encontra tina fey e se encerra
print(mo1.group())

mo2 = heroRegex.search('Tina Fey and Batman.')
print(mo2.group())


batRegex = re.compile(r'Bat(man|mobile|copter|bat)')
mo = batRegex.search('Batmobile lost a wheel')
print(mo.group()) #aqui vem o bat +() que for igual no pipe
print(mo.group(1)) # aqui vem o primeiro argumento a ser encontrado que no caso e mobile
