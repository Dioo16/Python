#isupper() e islower() verifica se todas são maiusculas ou minusculas
spam = 'Hello world!'
question = spam.islower()
print(question)
q2 = spam.isupper()
print(q2)
#também pode encadeiar as chamadas de métodos
spam = spam.upper().lower().upper().isupper()
print(spam)
isalph()#Retorna true se todas forem só e somente letras
isalnum()#Retorna true se a strin for constituita somente de letras e números
isdecimal()#Retorna true se a string for constituita somente  de caracteres numéricos
isspace()#Retorna true se a string for constituita só e somente de espaços, tabulações e quebras de linhas
istitle()#Retorna true se a palavra for com l[etras maisculas e depois seguidas só de minusculas