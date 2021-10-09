passos = 0
try: 
    def Collatz(number):
        passos = 0
        while number != 1:
            if number % 2 == 0:
                passos = passos + 1
                number =  number // 2
                print(number)
        
            else:
                number = number * 3 + 1
                print(number)
    
       
    Collatz(int(input()))   
except ValueError:
    print('Dont input a letter, only aceppts numbers...')