def spam():
    eggs = 'spam place '
    print(eggs)
    
def zzz():
    eggs = ' sucker'
    print(eggs)
    spam()
    print(eggs)
        
eggs = 'global'
zzz()
print(eggs)