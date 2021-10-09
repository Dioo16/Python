#! python3
# mcb.pyw – Salva e carrega porções de texto no clipboard.
 # Usage: py.exe mcb.pyw save <palavra-chave> – Salva clipboard na palavra-chave.
# py.exe mcb.pyw <palavra-chave> - Carrega palavra-chave no clipboard.
# py.exe mcb.pyw list – Carrega todas as palavras-chave no clipboard.
from contextlib import nullcontext
import shelve, pyperclip, sys

mcbShelf = shelve.open('mcb') #Como não existe um arquivo chamado ''mcb'', vai gerar um novo arquivo tipo shelve(Decodificado, para salvar varíaveis)
if len(sys.argv) == 3 and sys.argv[1].lower() == 'save': #Sys.1(Vai ser a palavra save) se for, o sys.argv[2] vai ser uma palavra que eu queira salvar, ex; spam, e o terceiro vai ser o terceiro argumento que nem foi lançado ainda
     mcbShelf[sys.argv[2]] = pyperclip.paste() #ficando, argv[1] = "save", agrv[2] = 'spam', agrv == 3, significa que já passou do agrv 1 e 2(é a prova).
elif len(sys.argv) == 2: #Se o argv ainda estiver na posição 2 por último, significa que não teve argv[2] de váriável, logo, o final sendo = argv[2]
     if sys.argv[1].lower() == 'list': #Se o primeiro argumento for igual a ''list'', significa que você quer a lista dos valores que você adcionou
        pyperclip.copy(str(list(mcbShelf.keys()))) #Logo, ele vai pegar do arquivo mcbShelf que criamos e pegar todas suas chaves(valores que queremos na list)
     elif sys.argv[1] in mcbShelf: #Se esse argumento já estiver contindo no arquivo, mostra que você quer ele copiado
        pyperclip.copy(mcbShelf[sys.argv[1]])
     elif sys.argv[1].lower() == 'delete':
         mcbShelf.clear()           
elif sys.argv[1].lower() == 'delete' and len(sys.argv) == 3:
    if sys.argv[2].lower() in mcbShelf:
       del mcbShelf[sys.argv[2]]
       


mcbShelf.close()

#Versão melhorada feita






