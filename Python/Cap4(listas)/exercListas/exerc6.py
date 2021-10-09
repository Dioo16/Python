Allnumbers = []
Oddnumbers = []
for i in range(0,20):
    print("put a number")
    n = int(input())
    if n % 2 != 0:
        Allnumbers.append(n)

print(Allnumbers)