def equation(a,b,c):
    x = ((b / 2) * -1) + (((c * -1) + ((b / 2) ** 2)) ** (1 / 2))
    x1 = x / a
    y = ((b / 2) * -1) - (((c * -1) + ((b / 2) ** 2)) ** (1 / 2))
    y1 = y / a
    if(x1.real //1 != x1):
        print("Não tem existe soluções reais para a equação")
    else:
        print(x1,y1)
    

print("Enter the A,B,C of the equation to see the solutions")
a = float(input())
b = float(input())
c = float(input())
equation(a,b,c)
