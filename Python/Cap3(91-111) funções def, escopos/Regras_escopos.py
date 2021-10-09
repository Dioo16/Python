def spam():
    global eggs
    eggs = 'spam' 
def sucker():
    eggs = 'bacon'
def ham():
    print(eggs)

eggs = 42
spam()
print(eggs)