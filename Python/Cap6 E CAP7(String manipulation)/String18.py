import re

#Por outro lado, findall() não retorna um objeto Match, mas uma lista de
#strings – desde que não haja grupos na expressão regular.
phoneNumRegex = re.compile(r'\d\d\d-\d\d\d-\d\d\d\d') # não tem nenhum grupo
print(phoneNumRegex.findall('Cell: 415-555-9999 Work: 212-555-0000')) #


phoneNumRegex = re.compile(r'(\d\d\d)-(\d\d\d)-(\d\d\d\d)') # tem grupos
print(phoneNumRegex.findall('Cell: 415-555-9999 Work: 212-555-0000'))

z = (phoneNumRegex.findall('Cell: 415-555-9999 Work: 212-555-0000'))

print(z[0])

"""
Para resumir o que o método findall() retorna, lembre-se do seguinte:
1. Quando chamado em uma regex sem grupos, por exemplo, \d\d\d-\d\d\d-
\d\d\d\d, o método findall() retorna uma lista de strings correspondentes,
como ['415-555-9999', '212-555-0000'].
2. Quando chamado em uma regex que tenha grupos, por exemplo, (\d\d\d)-
(\d\d\d)-(\d\d\d\d), o método findall() retorna uma lista de tuplas contendo
strings (uma string para cada grupo), como em [('415', '555', '1122'), ('212',
'555', '0000')].
"""