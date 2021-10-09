import shelve
#Shelve é utilizado para salvar variáveis de python, que não podem ser indicadas como arquivos de texto, como listas por exemplo.
shelfFile = shelve.open('mydata')#Aqui é onde definimos o nome do arquivo shelve, nesse caso ''my data'', em uma váriável
cats = ['Zophie', 'Pooka', 'Simon']#Criamos uma lista que se chama  cats
shelfFile['Namecats'] = cats #aqui criamos como se fosse um dicionário, shelfile cria uma lista chamada ''NameCats'' que recebe cats da ultima lista que enviamos
#No caso ficaria, Cats:Zophie,Pooka,Simon(Lista dentro de lista)
shelfFile.close() # finaliza o processo, caso tentar printar novamente, ocorrerá um erro

#Abrindo os dados do arquivo

shelfFile = shelve.open('mydata') #Aqui a váriável ta recebendo os dados do arquivo mydata que salvamos no diretório atual(mydata.bak,mydata.dat,mydata.dir)
print(type(shelfFile)) #tYPE SÓ Mostra o tipo de dado, nada mais
print(shelfFile['Namecats']#Aqui é printado os valores que a gente atribuíu na chave ''NameCats'' que no caso foi ''Cats"
)
shelfFile.close()



shelfFile = shelve.open('mydata')
print(list(shelfFile.keys()))#Como esses métodos retornam valores semelhantes a de listas, e não listas de verdade, é necessário utilizar a função (list())
print(list(shelfFile.values()))
shelfFile.close()

#Shelve é o único usado para para salvar dados de arquivos de python ou seja váriáveis