print("Type ' + ' to sums, ' - ' to subtractions, ' * ' to multiplications, '/' to divisions")
st = input()
if(st == "+"):
    def sums(numbera, numberb):
         total = numbera + numberb
         return print(total)
        
    print("Type two numbers for sum")
    a = int(input())
    b = int(input())
    sums(a,b)

elif(st == "-"):

     def subtractions(numbera, numberb):
         total = numbera - numberb
         return print(total)
        
     print("Type two numbers for subtractions")
     a = int(input())
     b = int(input())
     subtractions(a,b)


elif(st == "*"):
     def multiplications(numbera, numberb):

         total = numbera * numberb
         return print(total)
         
     print("Type two numbers for multiplications")
     a = int(input())
     b = int(input())
     multiplications(a,b)

else:
     def divisions(numbera, numberb):
         total = numbera / numberb
         return print(total)
        
     print("Type two numbers for divisions")
     a = int(input())
     b = int(input())
     divisions(a,b) 