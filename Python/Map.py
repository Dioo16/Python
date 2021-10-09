
def quadrado(termo):
    return termo ** 2
    

elementos=[1, 2, 3, 4, 5, 6]
list1 = map(quadrado, elementos)
print(list(list1))
