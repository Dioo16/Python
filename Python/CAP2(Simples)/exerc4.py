import random
print("Digite 1 para pedra, 2 para papel, 3 para tesoura, JOKEN-PO!")
result = int(input())
Sort = random.randint(1,3)
if (result == 1 and Sort == 2):
    print('Pedra vence papel, derrota :(')
    
elif (result == 1 and Sort == 3):
    print('Pedra derrota tesoura. Parabéns, você venceu (:')

elif (result == 2 and Sort == 1):
    print('Papel vence pedra. Parabens!, você venceu :)')

elif (result == 2 and Sort == 3):
    print('Tesoura vence papel, derrota :(')

elif (result == 3 and Sort == 1):
    print('Pedra vence Tesoura, derrota :(')

elif (result == 3 and Sort == 2):
    print('Tesoura vence papel. Parabéns, você venceu!')

elif ( result == Sort):
    print('Empate')    
    
    
    