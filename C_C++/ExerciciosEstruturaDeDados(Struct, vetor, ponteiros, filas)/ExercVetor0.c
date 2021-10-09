#include <stdio.h>
#include <math.h>

 main()
{
    int a, b, c, i,f;
    c = 0;
    b = 0;
    int fila[1000];
    int impar[1000];
     printf("Digite um total de números N para ver os primeiros impares\n");
     scanf( "%d", &f);
    for ( i = 0; i <f; i++)
    {
        printf("Adcione um numero\n");
        scanf( "%d", &a);
        fila[b] = a;
        if (fila[b] % 2 != 0)
        {
            impar[c] = fila[b];
            
            c = c + 1;
        }
        b = b + 1;
     }
    for ( i = 0; i < c; i++)
    {
      printf("%d/", impar[i]);
    }

    return 0;
}