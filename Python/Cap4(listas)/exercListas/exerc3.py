Numbers = []
while True:
    print('type some number, if want to exit, type it ''exit'' ')
    number = input()
    if number == 'exit':
        break
    Numbers.append(int(number))
Numbers.reverse()
print(Numbers)

