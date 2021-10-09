n1n2 = []
for i in range(0,5):
    Name = input()
    N1 = float(input())
    N2 = float(input())
    nf = (N1+N2)/2
    n1n2.append([(nf),[Name]])
n1n2.sort()
print(n1n2[-1])
print(n1n2[-2])
print(n1n2[-3])