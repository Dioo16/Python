Numbers = []
print('Enter the quantity n numbers')
Ns = int(input())
for n in range(Ns):
    print(str(len(Numbers)+1) + 'º')
    Numbers = Numbers + [int(input())]
    
Numbers.reverse()
print(Numbers[0:Ns])