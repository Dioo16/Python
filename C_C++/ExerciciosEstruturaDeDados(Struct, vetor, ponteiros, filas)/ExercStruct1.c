#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>
   
   
struct name
    {
        char nome[50];
    };

  
   
    
    
    
int main (void)
{ 
     struct name comprador;
     printf("Informe o comprador\n");
     scanf("%50s", &comprador.nome);
     printf("%s", comprador.nome);
    
   
    return 0;
}