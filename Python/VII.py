
def roman(elementos, n1):
         Romanletters = list(elementos)
         number = list(n1)
         return {Romanletters[0]: number[1] / Romanletters[1]}




Romansystem = {'i' : 1,'v' : 5, 'x':10 , 'L':50, 'c':100, 'D':500, 'M':1000}
print("Input a number to transform for the Roman system")
number = int(input())
dictnumber = {'1': number,'v' : number, 'x':number , 'L':number, 'c':number, 'D':number, 'M':number}
Calct = list(map(roman, Romansystem.items(), dictnumber.items()))
print(Calct[1])
