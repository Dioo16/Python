#include <stdlib.h>
#include <string.h>

int main()
{
    int i,num, b;
    int media[3][3];
    int matriz[10];
    b= 0;
    while (b<3)
    {
          
        for ( i = 0; i <3; i++)
            {
            printf("Digite o elemento da linha %d, coluna %d, da matriz\n", i+1, b+1);
            scanf(" %d", &num);
            media [b][i] = num;
            }
    b = b +1;
    }
    for ( i = 0; i < 3; i++)
    {
        matriz[i] = media [i][i];
    }
    


printf("Os numeros na diagonal da sua matriz sao: %d, %d, %d\n", media[0][0], media[1][1], media [2][2]);
printf(" Armazenados no vetor a diagonal %d, %d, %d\n", matriz[0], matriz[1], matriz[2]);

return 0;
}
