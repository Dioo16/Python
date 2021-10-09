Numbers1 = []
Numbers2 = []
Storer = []
n = 0
for n in range(0,10):
    print("Enter the " + str(len(Numbers1)+1) + "º number for list 1")
    l1 = int(input())
    Numbers1.append(l1)
    print("Enter the " + str(len(Numbers2)+1) + "º number for list 2")
    l2 = int(input())
    Numbers2.append(l2)
    Storer.append(Numbers1[n] * Numbers2[n])
    n = n + 1
print(Numbers1)
print(Numbers2)
print(Storer)