#include <stdio.h>
int main()
{
    int x, y;
    printf("Digite o y e o x do ponto");
    scanf("%d %d", &x, &y);
    if(x > 0 && y > 0){
        printf("O ponto esta no primero quadrante");
    }
    if(x < 0 && y > 0){
        printf("O ponto esta no segundo quadrante");
    }
    if(x < 0 && y < 0)
    {
        printf("O ponto esta no terceiro quadrante");
    }

    if( x > 0 && y < 0){
        printf("O ponto esta no quarto quadrante");
    }
    if (x == 0 && y>0){
        printf("O ponto pertence ao eixo das abcissas");
    }
    if (x > 0 && y == 0){
        printf("O ponto pertence ao eixo das ordenadas");
    }
    if(x == 0 && y == 0)
    {
        printf("O ponto pertence a origem");
    }
    return 0;
}