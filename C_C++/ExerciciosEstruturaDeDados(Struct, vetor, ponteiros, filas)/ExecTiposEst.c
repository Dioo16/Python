#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{ 
    float a = 4.3;
    float *k;
    int b = 15;
    int *j;
    k = &a;
    j = &b;
    b++;
    *k = *k + 5.4;
    a--;
    *j=(*j+3)**j;
    b = b + 2;

    printf( "%d \n ", &j);
    printf( "%d\n", *j);
    printf( "%d \n ", &b);
    printf( "%d \n", b);
    printf( "%f \n", &k);
    printf( "%f \n", *k);
    printf( "%f \n", a);
    printf( "%f \n", &a);
    printf("%f\n", (3**j) + *j);

    a)6422304
    b)306
    c)6422308
    d) 306
    e)-1.#QNAN0
    f)8.700000
    g)8.700000
    h)8.699997
    i)8.699997



    return 0;
}