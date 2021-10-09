students = {}
disapproved = {}
def nmed(students):
    c = 0
    for k,t in students.items():
        if(t>=6):
            print("The student " + k + " passed with note: " + str(t))
        else:
            print("The student " + k + " not passed with note: " + str(t))
            c += 1
    return c

def repr(nf,disapproved,students):
    for k,t in students.items():
        if(t<6):
            n3 = int(input("Enter the note of retake test of stundent" + k + "\n"))
            nf = (nf+n3)/2
            disapproved.setdefault(k,nf)
    for v,z in disapproved.items():
        if(z>=6):
            print("The student passed after retake " + v + ": with note" + str(round(z,1)))
        else:
            print("The student not passed after retake " + v + ": with note" + str(round(z,1)))


      
            
for x in range(0,2):
    nam = input("Type the name of student\n")
    n1 = int(input("Note 1\n"))
    n2 = int(input("Note 2\n"))
    nf =  (n1 + n2)/2
    students.setdefault(nam,nf)
nmed(students)
repr(nf,disapproved,students)




