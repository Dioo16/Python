def spam():
    global eggs #A Váriável 'Global' indica que a função 'eggs' será lida como um escopo global
    eggs = 'spam'
    
eggs = 'asko'
spam()
print(eggs)
