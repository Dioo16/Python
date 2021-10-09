#include <stdio.h>
#include <stdlib.h>



void partes (float num, float *fracionaria, int *inteiro)
{
    *inteiro = num / 1;
    *fracionaria = num - *inteiro;
    return;
    
}


int main()
{
    int inteiro;
    float fracionaria, num;
    scanf("%f", &num);

    partes(num, &fracionaria, &inteiro);

    printf("Inteiro e frácionário respectivamente: %d, %f", inteiro, fracionaria);

    return 0;
    

}