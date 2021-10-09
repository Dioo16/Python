import os

print(os.path.getsize('C:\\Windows\\System32\\calc.exe'))#Método getsize pega o tamanho do arquivo

print(os.listdir('C:\\Users\\Diogo\\Desktop\\Linguagens'))#Lista todos os itens do diretório


totalSize = 0
for filename in os.listdir('C:\\Windows\\System32'):
    totalSize = totalSize + os.path.getsize(os.path.join('C:\\Windows\\System32', filename))
    
print(totalSize)