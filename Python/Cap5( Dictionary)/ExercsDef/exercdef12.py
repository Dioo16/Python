def convtemp(temp,unitemp):
    if(unitemp == "C"):
        temperature = round(temp *(9/5) + 32, 2)
        print(temperature)
    else:
        temperature = round((temp - 32) * 5/9,2)
        print(temperature)
    

t = int(input("Digite a temperatura\n"))
u = input("Digite a unidade dessa temperatura, C para celsius e F, para fahrenheit\n")
convtemp(t,u)