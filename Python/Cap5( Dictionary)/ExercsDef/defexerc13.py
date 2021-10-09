def prim(num):
     c = 0

     for x in range(1,num+1):
        if(num % x == 0):
                c += 1
        
     if(c == 2):
        print(" O número " + str(num) + ' é primo')

     else:
        print("O número " +  + str(num) +  " não é primo")

num = int(input("Verifique se é primo\n"))
prim(num)