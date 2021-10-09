import random
Fixos = []
randons = []
c = 0
print("Fixed numbers")
#for n in range(0,5):
    #numbers = int(input())
    #fixed.append(numbers)
Fixos = [1,3,6,7,25,11,12,13,20,22]
print("Quantity of combinations")
qc = int(input())
print("Random numbers")
for j in range(0,qc):
     c = 0
     randons.clear()
     while(c != 6 ):
         j = 0
         tu = 0
         b = int(random.randint(1,25))
         for m in range(0,len(Fixos)):
             if(b != Fixos[m]):
                j += 1
             if(j == len(Fixos)):
                 if(len(randons)!= 0):
                     for q in range(len(randons)):
                         if(b != randons[q]):
                             tu += 1
                         if(tu == (len(randons))):
                             randons.append(b)
                             c +=1
                 else:        
                     N = (j,b)
                     randons.append(b)
                     c += 1
     print("Fixed" + str(Fixos) + "Random" + str(randons))   



