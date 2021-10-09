passos = 0 
number = int(input())

 
while number != 1:
    if number % 2 == 0:
        passos = passos + 1
        number =  number // 2
        print(number)
        
    else:
        number = number * 3 + 1
        print(number)
        passos = passos + 1

print('A quantidade de passos foi:', passos)