#include <stdio.h>
#include <math.h>

 main()
{
    int a, b, c, i;
    c = 0;
    b = 0;
    int fila[1000];
    int impar[1000];


    while (a != 0)
    {
        printf("Adcione um numero para a fila(0 para sair)\n");
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
      printf("%d,", impar[i]);
    }

    system("pause");

}