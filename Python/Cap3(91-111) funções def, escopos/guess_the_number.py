#this is a game to guess the number
import random
secretNumber = random.randint(1,20)
print('I am  thinking of a number between 1 and 20')

#Ask for player guess six times
for guessesTaken in range(1,7):
    print('Take a guess.')
    guess = int(input())
    
    if guess < secretNumber:
        print('Your guess is too low')
        
        
    elif guess > secretNumber:
        print('Your guess is to high')
        
    else:
        break 
if guess == secretNumber:
        print('Good job! You guessed my number in '+ str(guessesTaken)+ ' try!')
else:
     print('Nope. The number i was thinking of was ' + str(secretNumber))
        