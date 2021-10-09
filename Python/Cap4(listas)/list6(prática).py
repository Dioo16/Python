catNames = []
while True:
    print('Enter the name of cat' + str(len(catNames) + 1) + '(or enter nothing to stop.):')
    name = input() #str(len(catNames)+1) #adciona o cat na lista passando consecutivamente, cat1, cat2, cat3 etc
    if name == '':
        break
    catNames = catNames + [name] #
print('The cat names are:')
for name in catNames: #para os nomes adcionados na caixa 'catNames'
    print(' ' + name)