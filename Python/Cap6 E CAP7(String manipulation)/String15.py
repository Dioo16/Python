import re
batRegex = re.compile(r'Bat(wo)?man') #ao usar o caractere '?' a parte 'wo' fica opcional, ou seja, ela pode ou nõo aparecer,
mo1 = batRegex.search('The Adventures of Batman') # não necessáriamente precisa aparecer
print(mo1.group())
mo2 = batRegex.search('The Adventures of Batwoman')
print(mo2.group())


import re
phoneRegex = re.compile(r'(\d\d\d-)?\d\d\d-\d\d\d\d') #deixando opcional  o dd do número
mo1 = phoneRegex.search('My number is 415-555-4242')
print(mo1.group())
mo2 = phoneRegex.search('My number is 555-4242')
print(mo2.group())


#definição geral :  Você pode pensar no ? como se dissesse “faça a correspondência de zero ou
# de uma ocorrência do grupo que antecede esse ponto de interrogação”