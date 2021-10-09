#include <stdio.h>

int main()
{
    int numero, div;
    printf("Digite um número para saber se é divísvel por 4\n");
    scanf("%d", &numero);
    numero = numero % 100;
    if (numero % 4 == 0 )
    {
        printf("O número é divisível por 4, pois o número %d é divisível por 4", numero);
    }
    else
    {
        printf("O número não é divisivel por 4, pois o número %d não é divisvel por 4", numero);
    }
    return 0;
}