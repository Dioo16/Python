import re
beginsWithHello = re.compile(r'^Hello')
print(beginsWithHello.search('Hello world!')) # O  "^" só funciona com arquivos que começam com a instância definida
print(beginsWithHello.search('He said hello.')) #por isso aqui recebe none

endsWithNumber = re.compile(r'\d$') #Já o '$' só recebe aqueles arquivos com terminam com a instância colocada ao fim
print(endsWithNumber.search('Your number is 42'))# nesse caso, seria: Se a instancia for terminada por um número de 0 a 9 graças ao \d = digito 0 a 9
print(endsWithNumber.search('Your number is forty two.')) # e por isso, nesse caso ocorreu um ''none''


wholeStringIsNum = re.compile(r'^\d+$') # aqui ele limita por: começar algo e terminar algo pela instância definida, nesse caso seria:
print(wholeStringIsNum.search('1234567890')) # começar por um digito e terminar por um digito( digito = 0 a 9)
print(wholeStringIsNum.search('12345xyz67890'))