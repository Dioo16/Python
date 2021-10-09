def tab(n):
    for i in range(1,n+1):
        for x in range(1,n+1):
            calc = i * x
            print(str(i) + " x " + str(x) + " = " + str(calc))

print("Input a number to see your multiplication table")
number = int(input())
tab(number)