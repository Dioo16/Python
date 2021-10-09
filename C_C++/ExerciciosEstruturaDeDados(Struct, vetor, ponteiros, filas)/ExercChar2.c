#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    int i, j, lenv;
    char frase[31], vogais[] = "aeiouAEIOU";
    printf("Digite uma frase de até 30 caracteres\n");
    lenv = strlen(vogais);//lenv recebe o número de vogais

    gets(frase); //adciona na frase
    printf("\n");

    for (i = 0; i < strlen(frase); i++) // faz o for pelo número de letras da frase
    {

        for (j = 0; j < lenv; j++)//for pelo numero de Vogais
            if (frase[i] == vogais[j])// se o elemento frase[1] estiver contido nas vogais[1] ele quebra e volta pro primeiro for
                break;

        if (j == lenv)
            printf("%c", frase[i]);
    }

    return 0;
}