def m(valor1,valor2,valor3):
    if( valor1>valor2 and valor1>valor3):
        print(valor1)
    elif(valor3>valor1 and valor3>valor2):
        print(valor3)
    else:
        print(valor2)

print("Enter two numbers, to see the largest")
v1 = int(input())
v2 = int(input())
v3 = int(input())
m(v1,v2,v3) 