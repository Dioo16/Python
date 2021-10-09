import random

capitals = {'Alabama': 'Montgomery', 'Alaska': 'Juneau', 'Arizona': 'Phoenix',
'Arkansas': 'Little Rock', 'California': 'Sacramento', 'Colorado': 'Denver',
'Connecticut': 'Hartford', 'Delaware': 'Dover', 'Florida': 'Tallahassee', 'Georgia':
'Atlanta', 'Hawaii': 'Honolulu', 'Idaho': 'Boise', 'Illinois': 'Springfield',
'Indiana': 'Indianapolis', 'Iowa': 'Des Moines', 'Kansas': 'Topeka', 'Kentucky':
'Frankfort', 'Louisiana': 'Baton Rouge', 'Maine': 'Augusta', 'Maryland': 'Annapolis',
'Massachusetts': 'Boston', 'Michigan': 'Lansing', 'Minnesota': 'Saint Paul',
'Mississippi': 'Jackson', 'Missouri': 'Jefferson City', 'Montana': 'Helena', 'Nebraska':
'Lincoln', 'Nevada': 'Carson City', 'New Hampshire': 'Concord', 'New Jersey': 'Trenton',
'New Mexico': 'Santa Fe', 'New York': 'Albany', 'North Carolina': 'Raleigh', 'North'
'Dakota': 'Bismarck', 'Ohio': 'Columbus', 'Oklahoma': 'Oklahoma City', 'Oregon':
'Salem', 'Pennsylvania': 'Harrisburg', 'Rhode Island': 'Providence', 'South Carolina':
'Columbia', 'South Dakota': 'Pierre', 'Tennessee': 'Nashville', 'Texas': 'Austin',
'Utah': 'Salt Lake City', 'Vermont': 'Montpelier', 'Virginia': 'Richmond', 'Washington':
'Olympia', 'West Virginia': 'Charleston', 'Wisconsin': 'Madison', 'Wyoming': 'Cheyenne'}



# TODO: Cria os arquivos com as provas e os gabaritos das respostas.
# TODO: Escreve o cabeçalho da prova.
# TODO: Embaralha a ordem dos estados.
# TODO: Percorre todos os 50 estados em um loop, criando uma pergunta para cada um

for quizNum in range(35):
     # Cria os arquivos com as provas e os gabaritos das respostas.
     quizFile = open('capitalsquiz%s.txt' % (quizNum + 1), 'w') #Aqui se utiliza do recursod e placeholder(igual o printf de C/C++, ou seja esse %s(string) vai receber quizNum+1)
     answerKeyFile = open('capitalsquiz_answers%s.txt' % (quizNum + 1), 'w')
# Escreve o cabeçalho da prova.
     quizFile.write('Name:\n\nDate:\n\nPeriod:\n\n')#Aqui aonde vai ser digitado nome "\n" serve para pular as linhas, o mesmo vale ara Date e Period
     quizFile.write((' ' * 20) + 'State Capitals Quiz (Form %s)' % (quizNum + 1))#Aqui será aberto 20 espaços(para centralizar no arquivo) mais o número do formulário por um placeholder
     quizFile.write('\n\n')#Pular espaço
# Embaralha a ordem dos estados.
     states = list(capitals.keys()) #Faz com que States receba uma lista das chaves do dicionário "Capitals"
     random.shuffle(states)#Como os estados estão em ordem é necessário randomiza-los, para isso, usamos random.shuffle, shuffle = embaralhar(significado)


     for questionNum in range(50): #Como serão 50 questões, logo, um for range de 50
     # Obtém respostas corretas e incorretas.
          correctAnswer = capitals[states[questionNum]]#CORRECTAnswer recebe o value da chave states de acordo com o número da range, exemplo: capitals[states[1]] = juneau
          wrongAnswers = list(capitals.values())#as wrongAnswers recebe os valores do dicionário capitals transformado em lista(para conseguir transformar os valores)
          del wrongAnswers[wrongAnswers.index(correctAnswer)]#deleta os valores de wrongAnswers que são iguais aos da correctAnswer(Index serve para verificar valore iguais em um dicionário ou lista)
          wrongAnswers = random.sample(wrongAnswers, 3)#Vai escolher 3 valores randômicos já que os iguais já foram excluídos 
          answerOptions = wrongAnswers + [correctAnswer]#opções de respostas recebe 3 respostas erradas + a resposta correta
          random.shuffle(answerOptions)#Randomiza as opções de resposta

          quizFile.write('%s. What is the capital of %s?\n' % (questionNum + 1, states[questionNum]))#Vai utilizar de placeholder para marcar o número da questão no inicio, e pegar de states pelo range um stado
          for i in range(4):
               quizFile.write(' %s. %s\n' % ('ABCD'[i], answerOptions[i])) #Vai printar na cadeia(array) de strings o elemento de número de acordo com o range, ex: 'ABCD'[0] = A e assim vai.., Logo após será printado as opções de respostas
               quizFile.write('\n')#Só para ganhar espaço
          answerKeyFile.write('%s. %s\n' % (questionNum + 1, 'ABCD'[answerOptions.index(correctAnswer)]))# .index sempre retorna o lugar em que se encontra na lista o argumento que você passa
          print(answerOptions.index(correctAnswer)) #Por exemplo, se a resposta correta for C, ela estará na posição 2 da lista, logo retornará 2. Assim, vai ficar o mesmo de ser 'ABCD'[2] = C

quizFile.close()
answerKeyFile.close()