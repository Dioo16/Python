def fat(fatorial):
    result = 0
    start = fatorial * (fatorial -1)
    for i in range(fatorial-2,1, -1):
        result = (start + result) * i
        start = 0
    return print(result)

print("This program calculates the fatorial of a number")
print("Enter a number")
number = int(input())
fat(number)