ValueSell = int(input())
NewValue = 0 
ValueAround = 0
if (ValueSell > 50000):
    NewValue = ValueSell * 0.12
    ValueAround = round(NewValue,3)
    print(ValueAround)
elif (ValueSell >= 30000 and ValueSell <= 50000):
    NewValue = ValueSell * 0.09
    ValueAround = round(NewValue,3)
    print(ValueAround)
elif (ValueSell < 30000):
    NewValue = ValueSell * 0.07
    ValueAround = round(NewValue,3)
    print(ValueAround) 