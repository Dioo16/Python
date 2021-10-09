Numbers = []
n = 0
nsum = 0
while True:
    print('type some number, if want to exit, type it ''exit'' ')
    number = input()
    if number == 'exit':
        break
    n = n + 1
    Numbers.append(int(number))
    nsum = nsum + int(number)
Numbers.sort()
print('The bigger number is ' + str(Numbers[-1]))
print('The smaller number is ' + str(Numbers[0]))
print('The average the numbers is ' + str(nsum/n))
