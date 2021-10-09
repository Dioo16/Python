#include <stdio.h>

int main()
{
    int num1, num2, num3, num4;
    printf("Digite 3 valores em ordem crescente\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("Digite um quarto valor aleatório\n");
    scanf("%d", &num4);
  
    if (num4>num1 && num4>num2 && num4<num3)
    {
        printf("%d %d %d %d",num1, num2, num4, num3);
    }
    if (num4>num1 && num4<num2 && num4<num3)
    {
    printf("%d %d %d %d",num1, num4, num2, num3);
    }
    if(num4<num1)
    {
      printf("%d %d %d %d",num4, num1, num2, num3);
    }
    if(num4>num3)
   {
    printf("%d %d %d %d",num1, num2, num3, num4);
   }
    return 0;
}