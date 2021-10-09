Names =[]
for i in range(0,5):
    print('Enter a name')
    n = input()
    Names.append(str(n))
    
Names.sort(key=str.lower)
print(Names)