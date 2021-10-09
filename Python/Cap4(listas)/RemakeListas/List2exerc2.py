Numbers = []
for x in range(0,15):
    print('Input the' + str(len(Numbers)+1) + ' Number')
    Numbers = Numbers + [int(input())]
Numbers.sort()
print(Numbers[0:15])