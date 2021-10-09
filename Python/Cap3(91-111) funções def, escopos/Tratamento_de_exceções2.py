def spam(divideBy):
    try: #Um código em uma cláusula try se algo provocar algum erro, esse erro vai ser transferido para except e 
        # assim produzindo a mensagem contida em except e continuando o programa normalmente
        return 42 / divideBy
    except ZeroDivisionError:
        print('Error: Invalid argument.')
print(spam(2))
print(spam(12))
print(spam(0))
print(spam(1))
