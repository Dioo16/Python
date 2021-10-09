Numbers = []
for n in range(0,15):
    print('input the ' + str(len(Numbers)+1) + 'º number')
    number = input()
    Numbers = Numbers + [number]
    
print(Numbers[0:15])
