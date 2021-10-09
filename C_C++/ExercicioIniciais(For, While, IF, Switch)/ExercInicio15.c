#include <stdio.h>
#include <stdlib.h>
#include <string.h>


float conta (float n1, float n2, float n3);
int fatorial(int x);

int main (void)
{
    int resfat, x;
    float p, q, r, resultado;
    printf("Digite, p, q e r, e x \n");
    scanf("%f %f %f %d", &p, &q, &r, &x);
    resultado = conta(p,q,r);
    printf("O resultado = %0.2f\n", resultado);
    resfat = fatorial(x);
    printf("O resultado do fatorial = %d\n", resfat);

    return 0;
}

float conta (float n1, float n2, float n3)
{
    float res;
    res = n1 + (n2 * n3);
    return res;
}

int fatorial(int x)
{
    int cont, fat, x2;
    cont = 1;
    while (x != 1)
    { 
        fat = x;
        cont = cont * fat;
        x = x - 1;
    }
    return cont;

}