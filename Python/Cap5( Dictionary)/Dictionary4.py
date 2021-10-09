picnicItems = {'apples': 5, 'cups': 2}
print('i am bringing ' + str(picnicItems.get('cups', 0)) + ' cups.') #O get associa o valor descrito 
#com o próximo valor a ser colocado caso o valor dele não esteja no dicionário
print('i am bringing ' + str(picnicItems.get('apples', 0)) + ' apples.')

spam = {'name':'pooka', 'age': 5}
spam.setdefault('color','black') #Adciona uma chave e um valor em seguida, se ela já existir, não muda em nada
print(spam)
spam.setdefault('color', 'white')