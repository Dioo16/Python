#include <stdio.h>
int main()
{
    float precof,preco, descont;
    printf("Digite o preço inicial e a porcentagem de desconto\n");
    scanf("%f %f", &preco, &descont);
    descont = descont / 100;
    precof = preco - (preco * descont);
    printf(" O preço final com desconto é : %0.2f", precof);
    
    return 0;
}