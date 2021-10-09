#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void calc_esfera (float r, float *area, float *volume)
{
    *volume = 4/3 * 3.14 * pow(r, 3);
    *area = 4 * 3.14 *  pow(r,2);
    return;
}


int main(void){


    float r,area, volume;
    scanf("%f", &r);
    calc_esfera(r, &area, &volume);

    printf("Area e volume respectivamente %f, %f", area, volume);

    return 0;
}