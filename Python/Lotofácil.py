import random

def InsertNumbers(listanum):
    for prob in range(1,127):
        Conjn = []
        while True:
            numbers = random.randint(1,9)
            if numbers not in Conjn:
                Conjn.append(numbers)
                if(len(Conjn) == 5):
                    if Conjn not in listanum:
                        listanum.append(Conjn)
                        break
                    else:
                        Conjn = []
    return list(listanum)


def GeradorEmTxt(NumbersResul):
    LotoMenorResul = open("LotoMinResult.txt", 'w')
    for n in range(126):
        LotoMenorResul.write("\n %s %s" % (n+1, NumbersResul[n]))
        
    


NumbersProv = []
InsertNumbers(NumbersProv)
GeradorEmTxt(NumbersProv)
print(NumbersProv[125])






#TO DO: Primeiro, fazer uma lista aninhada recebendo o conjuto de jogos possíveis
    #TO DO: É bom dividir os dados entre menores, medianos e maiores
#TO DO: Segundo, realizar uma comparação entre esse conjunto de jogos para não haver escolhas iguais
#TO DO: (Melhoria)Terceiro, realizar a separação de  menos, medianos e maiores
#TO DO: 


#  03 - 06 - 07 - 08 - 09 
#  10 - 13 - 14 - 15 - 16
#  18 - 19 - 20 - 21 - 25

#Vamos dividir o jogo da lotofácil na seguinte estratégia- números menores, medianos e maiores
#Menores 1 ao 9
#medianos 10 ao 16
#Maiores 16 a0 25