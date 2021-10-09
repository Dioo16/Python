#include <stdio.h>


int main (void)
{
    int N;
    int total = 0;

    for( N = 0; N <= 100; N += 1)
    {
    total += N;
    }
    printf("%d\n", total);

return 0;
}
