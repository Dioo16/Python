import os

OpenFile = open('C:\\Users\\Diogo\\Desktop\\vsf.txt')#Python lê o arquivo em txt em modo de read(Leitura) e a partir disso trasnforma o dado em tipo ''File"
print(OpenFile.read()) #Read para ler os strings da váriável que recebeu o tipo "read"
OpenFile = open('C:\\Users\\Diogo\\Desktop\\vsf2.txt')
print(OpenFile.readlines()) #Ele lê toda a string presente no arquivo, quebrando em uma lista e identificando e demonstrando com um \n 
#toda quebra de linha existente
OpenFile = open('C:\\Users\\Diogo\\Desktop\\vsf.txt','w') # 'w' reenscreve por completo, como se uma váriável recebesse outra(A = B)
print(OpenFile.write('viadinho'))
OpenFile = open('C:\\Users\\Diogo\\Desktop\\vsf.txt','a')# 'a' adciona no texto já escrito, como se uma váriavel fosse acrescentada da outra(A = A + B)
print(OpenFile.write('do caralho vsf'))

#Sempre usar duas barras para reconhecer o path

#C:\Users\Diogo\Desktop\vsf.txt'


