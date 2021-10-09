#include <stdio.h>
#include <math.h>
int main()
{
    int catet, cateto;
    float hipo;
    printf("Digite os catetos para saber a sua hipotenusa\n");
    scanf("%d %d", &catet, &cateto);
    catet = pow(catet, 2);
    cateto = pow(cateto, 2);
    hipo = sqrt(catet + cateto);
    printf("A hipotenusa é : %0.2f", hipo);

    return 0;
}