#include <stdio.h>

int main(){
    int cdu,udc, c, d, u, cc, dd , uu;
    printf("Coloque o número(de 3 digitos)\n");
    scanf("%d", &cdu);
    
    c= cdu/100;
    d = (cdu % 100) / 10;
    u = cdu %10;

    cc= u * 100;
    dd= d * 10;
    uu = c * 1;
    udc= cc + dd + uu;
    printf("O número invertido ficará: %d", udc);

    
    return 0;
}