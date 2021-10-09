spam = 'cat', 'rat','bat' ,'elephant'
print (spam[0:3]) # um slice (:) indica de que valor inicial até o final que a lista deve ir
print (spam[2:])  # atalhos
print (spam[:1])

print(len(spam)) #indica o número de valores presentes na listas

spams = ['cat', 'rat', 'bat', 'elephant']
spams[1] = 'lion' #altera o valor 1, rat por lion
print(spams)
spams = spams + ['otario'] #soma a lista spams com 'otario'
print(spams)

del spams[4] #apaga um valor da lista, de acordo com o número de indice
print(spams)
del spams # apaga a variável por completo
