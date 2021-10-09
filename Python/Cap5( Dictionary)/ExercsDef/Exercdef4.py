print("This program shows the area of ​​the circles, squares and triangles")
while(ini != "*"):
    print("Choose a function(Circles, Squares, Triangles or exit(input *)")
    ini = input()
    if(ini == "triangle"):
        def area(base,altura):
            total = altura * base / 2
            return print(total)

        print("Funçao area de um triangulo")
        print("Digite a altura")
        H = int(input())
        print("Digite base")
        b = int(input())
        area(H,b)

    elif(ini == "squares"):
        def area(alt,lag):
            total = alt * lag / 2
            return print(total)

        print("Funçao area do quadrado")
        print("Digite a altura")
        a = int(input())
        print("Digite largura")
        l = int(input())
        area(a,l)
        
    elif(ini == "circles"):
        def area(r):
            total = float(3.14 * (r**2))
            return print(total)
        print("Area de um circulo")
        print("Digite o raio")
        ra = int(input())
        area(ra)