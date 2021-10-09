#include <stdio.h>

int main()
{
    int cod;
    int unit;
    float price;
    printf("Enter your snack code\n");
    scanf("%d",&cod);
    printf("Place how many units\n");
    scanf("%d",&unit);
    if (cod == 100){
    price = unit * 1.10;
    printf("%0.2f", price);
    }
    if (cod == 101){
    price = unit * 1.30;
    printf("%0.2f", price);
    }
    if (cod == 102){
    price = unit * 1.50;
    printf("%0.2f", price);
    }
    if (cod == 103){
    price = unit * 1.10;
    printf("%0.2f", price);
    }
    if (cod == 104){
    price = unit * 1.30;
    printf("%0.2f", price);
    }
    if (cod == 105){
    price = unit * 1.00;
    printf("%0.2f", price);
    }
    return 0;
}