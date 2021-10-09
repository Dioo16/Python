spam = {'color': 'red', 'age' : '42'}
for v in spam.values(): # O .Values , faz com que o for percorra atrás dos valores depois da chave
    print(v)
    
for t in spam.keys(): #For percorre procurando e achando as chaves
    print(t)
    
for l in spam.items():#For percorre procurando todos os itens dentro de spam em forma de pares respectivamente.
    print(l)
    
    for k, v in spam.items():
        print('Key: ' + k + ',Value: ' + str(v))