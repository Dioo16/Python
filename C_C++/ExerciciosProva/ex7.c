#include <stdio.h>
int main()
{
    int numero;
    printf("Digite um número para ver se ele é multiplo de 7\n");
    scanf("%d", &numero);
    if (numero % 7 != 0)
    {
        printf("O número não é multiplo de 7,");
    }
    else
    {
        printf("O número é multiplo de 7");
    }
    
    return 0;
}