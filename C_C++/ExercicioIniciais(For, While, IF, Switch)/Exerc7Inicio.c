#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a, c, g;
    c = 0;
    g = 0;
    a = 1;
    while (a<979)
   
     {
        if (a % 4 == 0 && a % 6 == 0)
        {
            c = c + 1;
        }
     
     a = a + 1;
    }

printf("%d\n", c);

























 return 0;
}