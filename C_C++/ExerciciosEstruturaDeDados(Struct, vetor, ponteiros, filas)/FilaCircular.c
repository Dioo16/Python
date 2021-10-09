#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

struct node
{
    char info[51] ;
    struct node *prox;
    struct node *ant;
};

typedef struct node no;

no *plista;
int posicao;

void menu()
{

     
    printf("\n\t\t\t\*****Cadastro de Clientes da Oficina******\n\n");
    printf("1. >Inserir cliente novo\n");
    printf("2. >Inserir cliente antigo\n");
    printf("3. >Consultar a lista de clientes(dos mais novos pros antigos)\n");
    printf("4. >Remover clientes novo \n");
    printf("5. >Remover clientes antigo\n");
    printf("6. >Sair\n");    
}

void inseririnicio(char elemen[])       
{
     
    no *aux;
    aux = (no*) malloc(sizeof(no));
    strcpy(aux->info, elemen); 
    
    if (plista == NULL) 
    {
               plista = aux;
               plista->prox = NULL;
               plista->ant = NULL;
    }
    else
    {
        plista->ant = aux;
        aux->prox = plista;
        plista = aux;
        plista->ant = NULL;
    }
}

void inserirfinal(char elemen[])         
{
     
    no *aux, *aux2;
    aux = (no*) malloc(sizeof(no));
    strcpy(aux->info, elemen); 
    aux->prox = NULL;
    if (plista==NULL)
    {
        plista=aux;
        aux=NULL;
        plista->prox = NULL;
        plista->ant = NULL;
    }
    else
    {
        aux2=plista;
        while (aux2->prox != NULL)
        {
             aux2=aux2->prox;
        } 
        aux2->prox = aux;
        aux->prox = NULL;
        aux->ant = aux2;
        aux2 = NULL;
    }     
}

void removerinicio()                    
{
     if (plista==NULL)
        printf("Lista Vazia");
     else
     {
         
         plista=plista->prox;
         plista->ant=NULL;
     }      
}     

void removerfim()                  
{
     no *aux;
     no *aux2;
     if (plista==NULL)
        printf("Lista Vazia");
     else
     {
         aux=plista;
         aux2=plista;
         while (aux->prox != NULL)
         {
             aux2 = aux;  
             aux=aux->prox;
         }   

         aux2->prox = NULL;  
         free(aux);
          
         
     }      
     
}     

void mostrarlista()                      
{
no *aux;
if(plista != NULL)
{
    aux = plista;
    do{
        printf(" %s ",aux->info);
        aux = aux->prox;

}
    while (aux != NULL);
}    
}

void alterarlista(char elemen[])                      
{
no *aux;
if(plista != NULL)
{
    aux = plista;
    do{
        if (elemen == aux)
        {

        }
    
        aux = aux->prox;

}
    while (aux != NULL);
}    
}



int main()
{
    int escolha; char alunos [51];
    plista = NULL;
    
    menu();
    
    do {
        printf("\nInsira a escolha: ");
        scanf("%i",&escolha);
        
       switch (escolha) {
                  case 1:
                       printf("\n Digite o nome do novo cliente:");
                       scanf("%s",&alunos);
                       inseririnicio(alunos);
                       break;
                  case 2:
                       printf("\n Digite o nome do antigo cliente :");
                       scanf("%s",&alunos);
                       inserirfinal(alunos);
                       break;
                  case 3:
                       mostrarlista();
                       break;
                  case 4:
                       removerinicio();
                       break;
                  case 5:
                       removerfim();
                       break;
                  case 6:
                       break;
                  case 7:
                       printf("\n Digite o nome do cliente a ser alterado:");
                       scanf("%s", &alunos);
                       alterarlista(alunos);

                  default:
                          puts("Opcao invalida.");
                          break;
           }
           menu();
        
    } while (escolha != 6);     
    
    
    return 0;
}
 

 

 

 

