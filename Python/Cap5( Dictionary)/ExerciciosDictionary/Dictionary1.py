schedule = {}
while(exit != "Yes"):
    sch = input("Input the name for schedule\n")
    num = int(input("Type the number of " + sch + "\n"))
    schedule.setdefault(sch, num)
    exit = input("Do you want exit?, Yes or no?")

for k, v in schedule.items():
    print("Name: " + k + "|Number: " + str(v))