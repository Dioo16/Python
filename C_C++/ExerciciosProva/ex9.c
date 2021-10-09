#include <stdio.h>

int main()
{
    int num1, num2, num3, num4, num5, maior, menor;
    printf("digite 5 números\n");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
    if  (num1>num2 && num1>num3 && num1>num4 && num1>num5)
    {
        maior = num1;
        printf("%d\n", maior);
    }
    else if (num2>num3 && num2>num4 && num2>num5){
        maior = num2;
        printf("%d\n", maior);
    }
    else if (num3>num4 && num4>num5){
        maior = num3;
        printf("%d\n", maior);
    }
    else if (num4>num5){
        maior = num4;
        printf("%d\n", maior);
    }
    else
    {
        maior = num5;
        printf("%d", maior);
    }
    if (num1<num2 && num1<num3 && num1<num4 && num1<num5){
        menor = num1;
        printf("%d", menor);
    }
    else if (num2<num3 && num2<num4 && num2<num5){
        menor = num2;
        printf("%d", menor);
    }
    else if(num3<num4 && num3<num5){
        menor = num3;
        printf("%d", menor);
    }
    else if (num4<num5){
        menor = num4;
        printf("%d", menor);
    }
    else
    {
        menor = num5;
        printf("%d", menor);
    }
        return 0;
}