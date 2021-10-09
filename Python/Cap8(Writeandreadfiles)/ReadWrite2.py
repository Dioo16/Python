import os

#• Chamar os.path.abspath(path) retornará uma string com o path absoluto
#    referente ao argumento. Essa é uma maneira fácil de converter um path
#    relativo em um path absoluto.
#• Chamar os.path.isabs(path) retornará True se o argumento for um path
#    absoluto e False se for um path relativo.
#• Chamar os.path.relpath(path, início) retornará uma string contendo um path
#    relativo ao path início para path. Se início não for especificado, o diretório de
#    trabalho atual será usado como path de início.

print(os.path.abspath('.')) #abspath retorna o path atual em forma absoluta

#Verificando a veracidade do abspath

print(os.path.isabs('delicious\\walnut'))#Aqui é retornado um false, pois, é um caminho sem o disco(C:\) como base, LOGO, path relativo
#Isabs retorna true se for um path absoluto e False se for um path relativo
print(os.path.isabs(os.path.abspath('delicious\\walnut')))#Aqui é o mesmo exemplo, em suma, um path relativo, no entanto, é retornado "True"...
#Por causa da função abspath. 

print(os.path.relpath('C:\\Windows', 'C:\\')) #Ele quer o path Windows pelo ínicio que é 'C:\\'

print(os.path.relpath('C:\\Windows', 'C:\\spam\\eggs'))#Por isso aqui há o indicativo de dois paths abosolutos.

print(os.path.relpath('\\otPokemon', 'C:\\ '))


