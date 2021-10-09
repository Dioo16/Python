  
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
  struct value
    {
        int valuet;
    };
    

    struct name
    {
        char nome[50];
        int codigop;
    };

    
    struct data
    {
        int dia;
        char mes[1000];
        int ano;
    };

    
    struct iitens
    {
        char items[100];
        int codg;
        int quanti;
        float valor;
    };  
  
  int main(void)
{

    int total, i, valortotal;
     printf("Digite a quantidade total de itens\n");
     scanf("%d", &total);
    int total, i, valortotal;


      struct iitens item[total];
       for ( i = 1; i < total+1; i++)
       {
         printf("Digite o nome do %d item, codigo, quantidade dele e seu valor(de forma separada)\n", i);
         scanf("%s %d %d %f", &item[i].items, &item[i].codg, &item[i].quanti, &item[i].valor);
       }
     
    
       for ( i = 1; i < total+1; i++)
       {
        printf("nome: %s | codigo do produto: %d |quantidade: %d |valor:%2.f\n", item[i].items, item[i].codg, item[i].quanti, item[i].valor);
        }  
  
  struct value valuetotal;
        for ( i = 0; i < total; i++)
        {
            valuetotal.valuet = valortotal + (item[i].quanti * item[i].valor);
        }
    printf("%d", valuetotal.valuet);

    return 0;       
}