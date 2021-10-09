list1=[]
list2=[]
list3=[]
print('enter 10 numbers in each list ')
print('list one:')
for l1 in range(0, 10):
    print('list one:')
    n = int(input())
    list1.append(n)
    print('list two:')
    n2 = int(input())
    list2.append(n2)  

for l1 in range(0, 10):
    list3.append(list1[l1] * list2[l1])
    
print(list3)
    