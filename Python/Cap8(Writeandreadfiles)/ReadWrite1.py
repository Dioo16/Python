import os
print(os.path.join('usr','bin','spam'))

myFiles = ['accounts.txt', 'details.csv', 'invite.docx']
for filename in myFiles:
    print(os.path.join('C:\\Users\\asweigart', filename))


print(os.getcwd())#Getcwd = Current working directory(Diretório de trabalho atual), printa qual é o diretório atual
os.chdir('C:\\Users\\Diogo\\Desktop\\Linguagens\\Python')#chdir = change directory, muda o diretório atual para o diretório


#Há duas maneiras de especificar um path de arquivo = caminho do arquivo, path = caminho
#• Um path absoluto, que sempre começa com a pasta-raiz. nesse caso é o diretório denomiinado "C:"
#• Um path relativo, que é relativo ao diretório de trabalho atual do programa, nesse caso é o diretório os arquivos estão, logo,
#C:\\Users\\Diogo\\Desktop\\Linguagens\\Python

#Temos também as pastas ponto (.) e ponto-ponto (..).
# um ponto significa o diretório atual, no nosso caso .\ significaria = (#C:\\Users\\Diogo\\Desktop\\Linguagens\\Python\) que é nosso diretório atual
# dois pontos significa a pasta pai ..\ significaria = C:\, pois essa é a pasta raiz

os.makedirs('C:\\delicious\\walnut\\waffles') #Primeiro caminho de pastas criadas
os.makedirs('C:\\delicious\\walnut\\waffles\\lixo')#Para adcionar uma pasta dentro de outras pastas, é necessário repetir o caminho com o novo nome da pasta