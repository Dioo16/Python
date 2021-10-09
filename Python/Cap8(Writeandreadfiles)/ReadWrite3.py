import os

path = 'C:\\Windows\\System32\\calc.exe'

print(os.path.basename(path)) #Retorna tudo após a ultima barra do path(basename)

print(os.path.dirname(path))#Retorna tudo antes da ultima barra do path

#Caso precise dos dois caminhos utilizar o método split:

calcFilePath = 'C:\\Windows\\System32\\calc.exe'

print(os.path.split(calcFilePath))

print(calcFilePath.split(os.path.sep))

print(os.path.exists('C:\\Windows')) #Se o path, arquivo, ou pasta existir, retornará true

print(os.path.isdir('C:\\Windows\\System32'))#Se nesse path, o ultimo for uma pasta, retornará true, caso contrário false

print(os.path.isfile('C:\\Windows\\System32'))#Se nesse path o último for um arquivo, retornará true, caso contrário false

print(os.path.exists('D:\\')
)


