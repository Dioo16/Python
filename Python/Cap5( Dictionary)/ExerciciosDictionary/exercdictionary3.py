spent ={}
def count(spent):
    for k in spent.values():
        for v in spent.values():
            if (k>v):
                mnumber = k
            else:
                mnumber = v
    print("The largest number is " + str(mnumber))

for n in range(0,5):
    name = input("Enter buyer name\n")
    spents = int(input("Quantify spendings\n"))
    spent.setdefault(name,spents)
count(spent)