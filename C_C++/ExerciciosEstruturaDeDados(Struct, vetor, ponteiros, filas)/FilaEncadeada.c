#include <stdio.h>
#include <stdlib.h>
#include <string.h>
  
typedef struct elemento Elemento;
struct elemento {
	int valor;
	Elemento *proximo;
	Elemento *anterior;
};

Elemento *inicio;
Elemento *fim;
int tamanho;

void insereFim(int valor) {
	Elemento *novo = aloca(valor);   
	if(inicio == NULL){
		inicio = novo;
		fim = novo;
	
	}else{
		Elemento *atual; 
		atual = fim;
		novo->anterior = atual;
		atual->proximo = novo;
		fim = novo;
	}
	tamanho++;
}
  
 int main(void)
 { 
    int p,x;
    printf("1- Cadastrar pedido");
    printf("2- Consultar pedido");
    printf("3- Alterar pedido");
    printf("4- Deletar  pedido");
    printf("5- Cadastrar pedido");
    scanf("%d", &p);
    if (p == 1)
    {
        x = insereFim(
    }
    






    return 0;
 }