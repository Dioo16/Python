
#include<stdio.h>
#include<string.h>

 int retangulo (int a, int c)
{
    int i,x;
    for (i = 0; i < a; i++)
    {
        for ( x = 0; x < c; x++)
        {
        printf("*");
        }
    printf("\n");
    }

   return 0;
}

int main(void)
{
    int r1, r2,t;
    printf("Digite o valor da altura ");
    scanf("%d", &r1);
    printf("Digite o valor do comprimento ");
    scanf(" %d", &r2);
    retangulo(r1,r2);
}