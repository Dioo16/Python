#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{   
    int vetora[11];
    int va, n, a, t, i, f;
    printf("Digite um número para saber a tabuada");
    scanf("%d", &n);
    a = 0;
    t = 0;
    for ( i = 0; i < n; i++)
    {
        t = 0;
        a = a + 1;
        t = a * n;
        printf("%d X %d = %d\n", a, n, t);
        if (i<11)
        {
            vetora[i] = t;
            printf("%d:elemento do vetor a = %d\n", i,vetora[i]);
        }
     
        
    }
    


    return 0;
}