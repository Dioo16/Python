Numbers = []
Numbersprocessaodos = []
C = 0
b = 0
a = 0
while True:
    C  = input()
    if (C == ':'):
        break
    Numbers.append(int(C))
    Numbersprocessaodos.append(False)
    b += 1
for n in range(0,b):
    g = 0
    if not Numbersprocessaodos[n]:
        a = 0
        for x in range(0,b):
             a = a + 1
             if (Numbers[n] == Numbers[x]):
                 g += 1
                 Numbersprocessaodos[x] = True
        
             if(a == b):
                 print(str((Numbers[n])) + '=' + str(g))
        