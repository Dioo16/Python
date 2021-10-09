#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a, b, c, i;
    c = 0;
    b = 0;
    int fila[10];
    int impar[10];
    int par [10];

    for (size_t i = 0; i < 10; i++)
    {
        printf("Adcione um numero para a fila\n");
        scanf( "%d", &a);
        fila[i] = a;
        if (fila[i] % 2 != 0)
        {
            impar[c] = fila[i];
            
            c = c + 1;
        }
       if (fila[i] % 2 == 0)
       {
           par[b] = fila[i];
           b = b + 1;
       }

     }
    printf(" a quantidade de numeros impares: %d\n", c);
    printf(" a quantidade de numeros pares: %d\n", b);
    printf("Impares\n");
    for ( i = 0; i < c; i++)
    {
      printf("Usando a [%d] posicao:%d\n", i,impar[i]);
    }
    printf("pares\n");
    for ( i = 0; i < b; i++)
    {
      printf("Usando a [%d] posicao:%d\n", i,par[i]);
    }

    return 0;
}