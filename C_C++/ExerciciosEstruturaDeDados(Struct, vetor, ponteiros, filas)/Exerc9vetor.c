#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int vetora[10];
    int vetorb[10];
    int vetorc[10];
    int a, b, i, c, t, g, z;
    z = 0;
     printf("Digite 20 números, 10 p/ vetor a, 10 p/ vetor b números\n");
    for ( i = 0; i <10; i++)
    {
        printf("Digite o numero da %d posicao do vetor a\n", i);
        scanf("%d", &a);
        vetora[i] = a;
        printf("Digite o numero da %d posicao do vetor b\n", i);
        scanf("%d", &b);
        vetorb[i] = b;
        vetorc[i] = vetora[i] - vetorb[i];
    }   
    for ( i = 0; i <10; i++)
    {
        printf("O [%d] do vetor c: %d\n", i, vetorc[i]);
    }
    return 0;
}