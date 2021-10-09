#include <stdio.h>
#include <math.h>
int main()
{   float ang;
    double angr;
    double Sen;
    double tann;
    double coss;
    printf("Digite o angulo, para saber o seno, cosseno e tangente\n");
    scanf("%f", &ang);
    angr = ang * 0.0174;
    printf("%f\n", angr);
    Sen = sin(angr);
    tann = tan(angr);
    coss = cos(angr);
    printf("O seno, cosseno e tangente respectivamente são: %f, %f e %f", Sen, coss, tann);

 
    return 0;
}