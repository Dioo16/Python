#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char func(int n1, int n2);
int func2(int q2);

int main (void)
{
    int a, b, resa, resb;
    printf("Digite A e B\n");
    scanf(" %d %d", &a,&b);
    resa = func(a,b);
    printf("%d\n", resa);
    resb = func2(b);
    printf("O quadrado de b = %d\n", resb);


    return 0;
}

char func(int n1, int n2)
{
    if (n1 % n2 == 0)
    {
        return printf("A veio a ser divisivel por b  \n"); 
    }
    else
    {
        return printf("A nao veio a ser divisivel por B  \n");
    }

}

int func2(int q2)
{
    int qua;
    qua = pow(q2, 2);
    return qua;
}