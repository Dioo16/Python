#include <stdio.h>
#include <math.h>

 int main()
{   printf("SOMA DOS PRIMEIROS 50 NUMEROS PARES\n");
    int  c, i;
    c = 0;

    for ( i = 0; i < 100+1; i++)
    {
        if (i % 2 == 0)
        {
            c = c + i;
        }
      
     }

      printf("O resultado: %d", c);

    return 0;
}