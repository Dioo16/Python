Numbersc = []
for n in range(0, 15):
    print('Input the ' + str(len(Numbersc)+1) + 'º number')
    number = input()
    Numbersc = Numbersc + [number]
    
Numbersc.sort()
print(Numbersc[0:15])