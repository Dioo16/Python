Numbers = []
c = 5

for n in range(0,5):
    print("Enter a number for a list")
    n = int(input())
    Numbers.append(n)
for x in range(4,-1,-1):
    if Numbers[x] % 2 == 0:
        del(Numbers[x])

print(Numbers)