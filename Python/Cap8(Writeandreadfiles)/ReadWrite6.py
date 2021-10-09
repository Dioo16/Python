import pprint
cats = [{'name': 'Zophie', 'desc': 'chubby'}, {'name': 'Pooka', 'desc': 'zikao'}]#Uma lista de dicionários
print(pprint.pformat(cats))#O pprint.pformat(cats) faz com que a lista de dicionários seja convertida em uma string
fileObj = open('Mycats.py', 'w')#Cria um arquivo mycats.py, já que ele não existe'
print(fileObj.write('cats = ' + pprint.pformat(cats) + '\n'))#Faz o arquivo mycats.py receber os dados da lista de dicionários criados anteriormente
fileObj.close()
