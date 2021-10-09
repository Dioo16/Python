Amountnumbers=[] 
Numbersprocessed=[]
print('Amount of numbers')
N1 = int(input())
for i in range(0,N1):#adciona na lista no range de número pré-definido
    print('put a number')
    n = int(input())
    Amountnumbers.append(n)
    Numbersprocessed.append(False)
for i in range (0,N1):#Verifica todos os números
    if not Numbersprocessed [i]: #Se o numero já estiver sido processado, ele não se repete
        Account = 0    
        for j in range(0,N1):#Verifica todos os números
            if Amountnumbers[i] == Amountnumbers[j]: #Compara os numeros, por exemplo [i] = 0, com todos de [J]
                Account = Account + 1
                Numbersprocessed[j] = True
        print(str(Amountnumbers[i])+ '=' + str(Account) + ',')
         
     

        
    
     