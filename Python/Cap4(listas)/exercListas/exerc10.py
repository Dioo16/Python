NN1N2 = []
for i in range(0,2):
    Name = input()
    N1 = float(input())
    N2 = float(input())
    NF = (N1+N2)/2
    NN1N2.append([(NF),[Name]])
NN1N2.sort()
print(NN1N2)
print(NN1N2[-1])
print(NN1N2[-2])

