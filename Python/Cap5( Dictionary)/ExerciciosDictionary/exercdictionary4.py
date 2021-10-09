Age ={}
def count(Age):
    for k in Age.values():
        for v in Age.values():
            if (k>v):
                mnumber = k
            else:
                mnumber = v
            if(k<v):
                snumber = k

    print("The newest has " + str(snumber))
    print("The oldest has " + str(mnumber))

for n in range(0,5):
    name = input("Enter the name\n")
    spents = int(input("Age\n"))
    Age.setdefault(name,spents)
count(Age)