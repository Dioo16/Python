import math #Importar função math, para usar "math.cos"
Values = []
for t in range(0,3):
    print('Enter a x')
    value = int(input())
    x = math.cos(value)  + 1
    Values.append(x)
print(Values)