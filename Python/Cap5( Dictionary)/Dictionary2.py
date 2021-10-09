birthdays = {'Diogo': 16}
while True:
    print('Enter a name: (blank to quit)')
    name = input()
    if name == '':
        break


    if name in birthdays:
        print(str(birthdays[name]) + ' is the birthdays of ' + str(name))
            
    else:
        print('i do not have birthday information for' + name)
        print('What is their birthday')
        bday = input()
        birthdays[name] = bday
        print('Birthday database updated.')
            