#include <stdio.h>

int main ()
{  
    int num, ant, suc;
    printf(" Coloque o número para saber seu sucessor e antecessor\n");
    scanf("%d", &num);
    ant = num - 1;
    suc = num + 1;
    printf("O sucessor e o antecessor respectivamente são: %d e %d \n",suc,ant);
    
    
    return 0;
}