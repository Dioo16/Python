names ={}
def nn(nam):
    z = 1
    while(nam != ':'):
        names.setdefault(z,nam)
        z = z + 1
        nam = input()


print("Type any names, after, check what the repetitions are, ':' to exit")
nam = input()
nn(nam)
z = 0
for k in names.values():
    z += 1
    c = 0
    for v in names.values():
        if(k == v):
            c = c + 1

        print("The name " + k + " repeated " + str(c) + " times" )



