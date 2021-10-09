#include <stdio.h>

int main()
{
    int a1,a2,a3;
    printf("escreva tres valores, os dois primeiros para o parametro(final e inicial), terceiro para verificar\n");
    scanf("%d %d %d", &a1, &a2, &a3);
    if (a3>=a1 && a3<=a2)
    {
        printf("O número está dentro do parametro");
    }
    else
    {
        printf("O número não esta dentro do parametro");
    }
    
    return 0;
}