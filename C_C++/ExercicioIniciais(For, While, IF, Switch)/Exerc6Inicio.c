
#include <stdio.h>
int main()
{
    float num;

printf("Enter a number for to show the reverse\n");
scanf("%f", &num);
if (num == 0)
    {
        printf("Error\n");
    }
num = 1/num;
printf("%0.2f\n", num);
    
return 0;
}