import re
haRegex = re.compile(r'(Ha){3}')
mo1 = haRegex.search('HaHaHa')
print(mo1.group())
mo2 = haRegex.search('Ha')

#Por exemplo, (Ha) 
# {3,} corresponderá a três ou mais instâncias do grupo (Ha), enquanto (Ha)
# {,5} corresponderá a zero até cinco instâncias. 
# Enquanto a expressâo {3,5} significa de 3 instancias até 5 instâncias

#Como o python naturalmente escolhe a string com o maior número de instâncias, nesse caso, ao usar o ''?'', ele escolhe a primeira que 
# curpir a condição
greedyHaRegex = re.compile(r'(Ha){3,5}')
mo1 = greedyHaRegex.search('HaHaHaHaHa')
print(mo1.group())
print('\n')
nongreedyHaRegex = re.compile(r'(Ha){3,5}?')
mo2 = nongreedyHaRegex.search('HaHaHaHaHa')
print(mo2.group())

#Observe que o ponto de interrogação pode ter dois significados em
#expressões regulares: declarar uma correspondência nongreedy ou indicar um
#grupo opcional. Esses significados não têm nenhuma relação entre si.
