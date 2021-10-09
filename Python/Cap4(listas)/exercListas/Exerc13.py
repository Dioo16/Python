temperature = []
assignment = 0
ass2 = 0
ass3 = -1
percent = []

while True:
    print('Type a temperature, to exit, type :')
    Temp = int(input())
    assignment = 0 + 1
    temperature.append(int(Temp))
    sum = temperature[ass2] + temperature[ass2] * 0.10
    #print(sum)
    ass2 = ass2 + 1
    percent.append(float(sum))
    #print(percent)
    z = percent[-1]
    #print(z)
    #print(percent[ass3])
    for n in range(0,len(percent)):
        ass3 = ass3 + 1
        x = percent[ass3]
        if z > x :
            print("The temperature is bigger than the others")
            break
    ass3 = -1
            
    