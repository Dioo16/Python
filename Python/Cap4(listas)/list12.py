import copy
spam = ['a', 'b', 'c', 'd']
cheese = copy.copy(spam) #copia a lista spam, de forma que elas se referem a listas diferentes
cheese[3] = 42 
print(spam)
print(cheese)

copy.deepcopy(cheese) #para listas que contém listas
