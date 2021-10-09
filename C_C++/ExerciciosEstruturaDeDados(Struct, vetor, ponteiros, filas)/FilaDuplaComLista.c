#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
//                                                       SISTEMA DE CADASTRO DE NOMES

struct lista2
{
    char Nomes[51];
    struct lista2* ant;
    struct lista2* prox;
};
typedef struct lista2 Lista2;

Lista2* lst2_cria (void)
{
    return NULL;
}
Lista2* lst2_insereini (Lista2* l, char v[] )
{
    Lista2* novo=(Lista2*)malloc(sizeof(Lista2));
    strcpy(novo->Nomes, v);
    novo->prox=l; 
    novo->ant=NULL;
    if (l!=NULL) l->ant=novo;
    return novo;
}
Lista2* lst2_inserefim(Lista2* inicio, char valor[]){

     Lista2* novo, *atual;

     novo = malloc(sizeof(Lista2));
     if(novo == NULL)
         return;
     if(inicio == NULL){
         strcpy(novo->Nomes,valor);
         novo->prox = novo->ant = NULL;
         inicio = novo;
     }
     else{
         atual = inicio; /* atual aponta para o início */
         while(atual->prox != NULL) /* enquanto o nó atual não for o último */
            atual = atual->prox;    /* vai para o nó seguinte */
         strcpy(novo->Nomes,valor);
         novo->ant = atual;  /*o nó anterior ao novo é o nó atual */
         novo->prox = NULL; /* não há próximo nó, pois o novo será o último */
         atual->prox = novo; /* o nó atual aponta para o novo nó e não é mais o último */
     }
}


Lista2* lst2_busca (Lista2*l, char v[])
{
    Lista2* p;
    for (p=l; p!=NULL; p=p->prox)
        if (strcmp (p->Nomes,v)==0)
            return p;

    return NULL;
}
void buscarname(Lista2* l,char v[])
{
    char retard[1000];
    int i,x;
    Lista2* p;
    for (p=l; p!=NULL; p=p->prox)
    {
        if (strcmp (p->Nomes,v)==0)
        {
            
            Lista2* p;
        p= lst2_busca(l,v);
        if (p==NULL)
        {
        printf("Nome não encontrado.\n");
        return l;
        }
        else printf("O nome %s esta presente na lista\n", p);            
        
        if (l==p) l=p->prox;
        else p->ant->prox=p->prox;
        if (p->prox!=NULL)
        p->prox->ant=p->ant;
        free(p);
        
         
    
        }

    }
}



Lista2* lst2_retira (Lista2* l, char v[])
{
    Lista2* p;
    p= lst2_busca(l,v);
    if (p==NULL)
    {
        printf("Nome nao encontrado.\n");
        return l;
    }
    else printf("Nome retirado.\n");
    if (l==p) l=p->prox;
    else p->ant->prox=p->prox;
    if (p->prox!=NULL)
        p->prox->ant=p->ant;
    free(p);
    return l;

}
int lst2_vazia(Lista2* l)
{
    if (l==NULL)return 1;
    else return 0;
}

void lst2_imprimefimini(Lista2* l){
    Lista2*p;
    p=l;
    if (p==NULL){
        printf("\nLista Vazia");
    }
    else{
    while(p!=NULL) {
        printf("%s\n", p->Nomes);
        p=p->prox;
    }
    }

}
void lst2_imprimeinifim (Lista2* l)
{

    Lista2*p=l;

    if(lst2_vazia(l))

        printf("\n\nA lista esta vazia.\n\n");


    else
    {
        while(p->prox != NULL)

            p = p->prox;


        while(p != NULL)
        {

            printf("%s\n", p->Nomes);

            p = p->ant;

        }

    }

}
Lista2* lst2_libera (Lista2* l)
{
    Lista2 *p = l->ant;


    while(p != NULL)
    {
        free(p);
        p = p->ant;
    }

    p = l;

    while(p != NULL)
    {
        free(p);
        p = p->prox;
    }
    return p;
}

void compararnome(Lista2* l,char c[],char v[])
{
    char dingo[1000];
    int i,x,d;
    Lista2* p;
     for (p=l; p!=NULL; p=p->prox)
    {
        if (strcmp (p->Nomes,v)==0)
        {
            
        p= lst2_busca(l,v); 
        dingo[1000] = lst2_busca(l,v);
        printf(dingo);
        for ( i = 0; i < strlen(c); i++)
        {
            d = 0;
            for ( x = 0; x < strlen(v); x++)
            {
                if( c[i] == v[x])
                {
                    d = d + 1;
                }

                if( d == 3)
                {
                    dingo[1000] = p;
                    printf("%s", dingo);
                }
            }

        }
        
        if (l==p) l=p->prox;
        else p->ant->prox=p->prox;
        if (p->prox!=NULL)
        p->prox->ant=p->ant;
        free(p);
        }   
     
        
    }




}

void imprimir_menu(){
    printf("\n\t\t>----------------------------------CADASTRO DOS ALUNOS--------------------------------\n");
    printf("\n\t\t>-------------------- MENU --------------------<\n\n");
    printf("\n1)Cadastrar aluno\n2)Consultar\n3)Listar todos\n4)Sair\n5)Buscar\n6)Excluir todos\n7)  \n0)Mostrar opcoes\n");
    printf("\n\t\t>----------------------------------------------<\n");
}
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n,i;
    char names[51];
    char namesc[51];
    Lista2* l;
    l=lst2_cria();
    imprimir_menu();
    while(1)
    {


        scanf("%d",&n);
        if(n==4)break;
        switch(n)
        {
        case 0:
            imprimir_menu();
            break;
        case 1:
            printf("Digite o nome que deseja inserir\n");
            scanf(" %[^\n]s", names);
            l=lst2_insereini(l, names);
            break;
        case 2:
             if(lst2_vazia(l))
                printf("A lista esta vazia.\n");
            else printf("A lista nao esta vazia.\n");
            break;
        case 3:
            
        
                lst2_imprimeinifim(l);
            
             
            break;
        case 5:
            printf("Digite o nome(completo) que deseja buscar \n");
            scanf(" %[^\n]s", names);
            buscarname(l,names);
            printf("Digite o nome parcialmente completo que deseja buscar, ex: Maria e Marcos, ambos compartilham no inicio o 'mar' \n");
            scanf(" %[^\n]s", namesc);
            compararnome(l, namesc,names);
            break;
        case 6:
            l=lst2_libera(l);
            printf("Lista liberada\n");
            break;

        case 7:


        default:
            printf("\nDigite uma das opcoes validas.\n");
            break;
        }
    }
    return 0;
}