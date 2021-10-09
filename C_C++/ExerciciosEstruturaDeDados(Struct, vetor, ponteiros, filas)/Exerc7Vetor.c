#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
     int vetora[10];
     int mul[10];
     int a, b, i, c, t, g, z;
     z = 0;
     printf("Digite 10 números\n");
    for ( i = 0; i <10; i++)
    {
        printf("Digite o numero da %d posicao\n", i);
        scanf("%d", &a);
        vetora[i] = a;
    }   
    printf("Digite um número para verificar seus multiplos contidos no vetor\n");
    scanf("%d", &b);
    for ( t = 0; t < 10; t++)
    {
        if (vetora[t] % b == 0) 
        {
            mul[z] = vetora[t];
            z = z + 1;
        }
    }

    printf("O numero de multiplos sao %d\n", z);
    for (g = 0; g < z; g++)
    {
        printf("Os multiplos sao: %d\n", mul[g]);
    }
    


    return 0;
}