Numbers = []
for x in range(0, 15):
    print('input the ' + str(len(Numbers)+1) + ' number')
    Numbers = Numbers + [int(input())]

print(Numbers[0:15])