from os import read
import re



def achador(fraseini):
    altverb = re.compile(r'VERB(\W)?')
    Verbc = str(altverb.search(frase).group())

    altverb = re.compile(r'ADJECTIVE(\W)?')
    Adjectivec = str(altverb.search(frase).group())

    altverb = re.compile(r'NOUN(\W)?')
    Nounc = str(altverb.search(frase).group())

    altverb = re.compile(r'NOUN(\W)?')
    Nounc2 = str(altverb.search(frase).group())


    return Verbc, Adjectivec, Nounc, Nounc2 
     
Openfrase = open("C:\\Users\\Diopc\\Desktop\\Madlib.txt")

frase = Openfrase.read()
frasel = frase.split()
print("Enter an adjective: ")
adjective = input()
print("Enter a noun")
noun = input()
print("Enter a verb")
verb = input()
print("Enter a noun")
noun2 = input()
contNoun = 0
VerbSearch, AdjectiveSearch, NounSearch, Noun2Search = achador(frase)



for words in range(len(frasel)):
     if str(frasel[words]) == (AdjectiveSearch) or frasel[words] == 'ADJECTIVE':
         frasel[words] = adjective
         
     if str(frasel[words]) == (NounSearch) or frasel[words] == 'NOUN':
         contNoun += 1
         if contNoun == 1:
             frasel[words] = noun
         
     if str(frasel[words]) == (VerbSearch) or frasel[words] == 'VERB':
         frasel[words] = verb
     
     if str(frasel[words]) == (Noun2Search) or frasel[words] == 'NOUN':
         frasel[words] = noun2

frasefinal = ' '.join(frasel)
print(frasefinal)

fraseemtxt = open("frase.txt", 'w')
fraseemtxt.write(frasefinal)
fraseemtxt.close()
