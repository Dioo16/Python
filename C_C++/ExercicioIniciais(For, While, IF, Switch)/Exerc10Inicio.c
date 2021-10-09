#include <stdio.h>

int main()
{
    int a, d;

    while (a != 1000)
    {
          printf("Digite um número para saber se é par ou não\n");
          scanf("%d", &a);
        if (a % 2 == 0)
        {
            printf("O numero veio a ser par\n");
            d = d + 1;
        }
        else
        {
            printf("O numero nao veio a ser par\n");
        }

        printf("o número de vezes que apareceu um numero par foi: %d \n", d);
    }
    
    return 0;
}