#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int vetora[7];
    int a, b, i, c, r;
    printf("Digite  dois números de 0 a 7, para ver a soma dessas posições\n");
    scanf("%d", &a);
    scanf("%d", &b);
    for ( i = 0; i < 8; i++)
    {   
        printf("Digite o numero da %d posicao\n", i);
        scanf("%d", &c);
        vetora[i] = c;
    }
     
     r = vetora[a] + vetora[b];

    printf("%d", r);   
    return 0;
}