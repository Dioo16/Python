#Join, importante
c = ('my', 'name', 'is', 'Diogo')
print(' '.join(['my','name','is','Simon']))
print(' '.join(c))

# Primeiro algo que você quer colocar entre os valores da lista, ali está um espaço ' ', mas pode ser qualquer coisa, virgulas e etc, dps
# . join, e a lista ou a variavel contendo a lista

#Split faz o contrário de join, recebe uma string e traansforma em valores de list
d = input()
x = (d.split())
print(x)
z =(d.split(',')) #passa um delimitador diferente para os valores em join,
print(z)
#split para quebra de linhas
spam = ''' dear alice,
how have you been? i am fine.
there is container in the fridge
that is labeled ''milk experimen".
please do not drink it
sincerely
bob'''
print(spam.split('\n'))