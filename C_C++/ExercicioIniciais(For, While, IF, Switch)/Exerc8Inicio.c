#include <stdio.h>

int main()
{
    int a, c, d, u;
    printf("Enter a number in between 100 and 999\n");
    scanf("%d", &a);
    c = 0;
    d = 0;
    u = 0;

    if (a >= 100 || a <=999){
    c = a / 100;
    d = (a % 100) / 10;
    u = a % 10;
    }
    printf(" The hundred, ten and unity is: %d, %d, %d", c, d, u);

    return 0;
}