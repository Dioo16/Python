#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void array( int *arrayvet,int *maior, int *vezes, int h)
{   
    int i,x,c,z,y,a;
    *vezes = 0;
    for ( i = 0; i < h; i++)
    {
        c = 0;

        for ( x = 0; x < h; x++)
        {
            if (arrayvet[i] >= arrayvet[x])
            {
              c += 1;
            }
            
            if (c == (h-1))
            {
              *maior = arrayvet[i];
            }
            

        }
        
    }


    for ( z = 0; z < h; z++)
    {
        if (*maior == arrayvet[z])
        {
            *vezes += 1;
        }
        
    }
    
    return;

}

int main()
{
    
    int h, i, maior, vezes;
    printf("Digite o numero de elementos que deseja\n");
    scanf("%d", &h);

    int arrayvet[h];

    for ( i = 0; i < h; i++)
    {
        scanf("%d", &arrayvet[i]);
    }



    array(arrayvet, &maior, &vezes, h);
    printf("O maior numero e : %d, numero de vezes %d", maior, vezes);


    return 0;

}

//5, 2, 15, 3, 7, 15, 8, 6, 15}