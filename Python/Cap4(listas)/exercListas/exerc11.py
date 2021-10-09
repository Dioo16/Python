States =['Acre','Alagoas','Amapá','Amazonas','Bahia','Ceará','Espírito Santo','Goiás','Maranhão','MatoGrosso','Mato Grosso do Sul','Minas Gerais','Pará','Paraíba','Paraná','Pernambuco','Piauí','Rio de Janeiro','Rio Grande do Norte','Rio Grande do Sul','Rondônia','Roraima','Santa Catarina','São Paulo','Sergipe','Tocantins','Distrito Federal']
while True:
    print('Enter a state and the program will check if the state are valid, if want to exit, input ":" ')
    State = input()
    if State == ':':
        break
    if  State in States:
       print("okay, valid state")
    else:
        print('Not valid state')
    
