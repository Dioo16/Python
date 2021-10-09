Numbers = []
n = 0
c = 0
while True:
    print("Enter a number for view Major, Minor and Average")
    cont = input()
    if cont == ':':
        break
    Numbers.append(int(cont))
    n = n + 1
    c = c + int(cont)
Numbers.sort()

print("The Smaller number is:", (Numbers[0]), 'The bigger number is:', Numbers[-1], 'and average is:' , (c/n))