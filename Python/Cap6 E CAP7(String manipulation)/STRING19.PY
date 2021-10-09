import re
xmasRegex = re.compile(r'\d+\s\w+')
print(xmasRegex.findall('12 drummers, 11 pipers, 10 lords, 9 ladies, 8 maids, 7 swans, 6 geese, 5 rings, 4 birds, 3 hens, 2 doves, 1 partridge'))

#A expressão regular \d+\s\w+ corresponderá a textos que tenham um ou
#mais dígitos (\d+) seguidos de um caractere de espaço em branco (\s) seguido
#de um ou mais caracteres que sejam letra/dígito/underscore (\w+).

vowelRegex = re.compile(r'[aeiouAEIOU]') # fazendo a classe de caracteres que a gente quer que o findall mande para a lista
print(vowelRegex.findall('RoboCop eats baby food. BABY FOOD.'))

 #[a-zA-Z0-9] 
#[a-z]#Usando um hifén seleciona todos os caracteres de a ao z
#[A-Z]#Usando um hifén seleciona todos os caracteres de a ao z em maiusculo 
#[0-9]# seleciona todos os números de 0 ao 9



consonantRegex = re.compile(r'[^aeiouAEIOU]') # ao colocar um circuflexo, vira uma classe negativa de caracteres, como se fosse um ''if not''
print(consonantRegex.findall('RoboCop eats baby food. BABY FOOD.')) # logo, vão adcionar as letras que não são as que a gente pediu
