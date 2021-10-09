#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

struct  Aluno{
	double ra;
	char nome[50];
	struct Aluno *anterior;
};



struct Aluno *al_atual = NULL;

void cadastrar(){
	printf("1 - Cadastro----------\n\n");
	struct Aluno *al_anterior = al_atual;
	al_atual = (struct Aluno *) malloc(sizeof(struct Aluno));
	al_atual->anterior = al_anterior;
	
	printf("Digite o RA..: ");
	scanf("%lf",&al_atual->ra);
	
	printf("Digite o Nome: ");
	fflush(stdin);
	gets(al_atual->nome);
	
	printf("Dados cadastrados com sucesso!");
}

void consultar(){
	printf("2 - Consultar----------\n\n");
	double ra;
	
	if (al_atual == NULL){
		printf("A lista esta vazia!");
	}else{
	
		printf("Digite o RA pra consultar: ");
		scanf("%lf",&ra);
		
		struct Aluno *al_atual_aux = al_atual;
		struct Aluno *al_prox = al_atual_aux;
		while(al_atual_aux!=NULL){
			if (al_atual_aux->ra==ra){
				break;
			}
			al_prox      = al_atual_aux;
			al_atual_aux = al_atual_aux->anterior;
		}
		if (al_atual_aux==NULL){
			if (al_atual==NULL){
				printf("A lista esta vazia!");
			}else{
				printf("RA nao encontrado!");
			}
		}else{
			printf("\nDados encontrados:\n");
			printf("RA...: %.0lf\n", al_atual_aux->ra);
			printf("NOME.: %s\n\n", al_atual_aux->nome);
			printf("O que deseja fazer:\n");
			printf("1 - Alterar\n");
			printf("2 - Excluir\n");
			printf("3 - voltar\n");
			printf("Digite a opcao: ");
			int opcao;
			scanf("%d",&opcao);
			printf("\n");
			switch(opcao){
				case 1:
					printf("Digite os novos dados:\n");
					printf("RA...: ");
					scanf("%lf",&al_atual_aux->ra);
					printf("NOME.: ");
					fflush(stdin);
					gets(al_atual_aux->nome);
					printf("Dados alterados com sucesso!");
					break;
				case 2: 
					if (al_atual_aux==al_atual){
						al_atual = al_atual->anterior ;
					}else{
						al_prox->anterior = al_atual_aux->anterior;
					}
					free(al_atual_aux);	
					printf("Excluido com sucesso!");
				
					break;
				case 3: return;
				default: printf("Opcao invalida!");
			}
		}
	}
}

void listar_todos(){
	printf("3 - Listar todos----------\n\n");
	if (al_atual == NULL){
		printf("A lista esta vazia!");
	}else{
		struct Aluno *al_atual_aux = al_atual;
		while(al_atual_aux!=NULL){
			printf("RA....: %.0lf\n",al_atual_aux->ra);
			printf("NOME..: %s\n",al_atual_aux->nome);
			printf("----------\n");
			al_atual_aux = al_atual_aux->anterior;
		}
	}

}

void buscar_por_nome(){
    char namesc[100];
    char list[100];
    int d,c,b,i,g,s,z;
    c = 0;
    i = 0;
    g = strlen(list);
    b = strlen(namesc);
	printf("5 - Buscar por nome\n\n");
    printf("Digite o nome ou parte dele\n");
    scanf("%s", namesc);
    
    if(al_atual == NULL){
        printf("A lista esta vazia");
    }else{
        struct Aluno*al_atual_aux = al_atual;
        while(al_atual_aux != NULL){
            strcpy(list, al_atual_aux->nome);
            s = strlen(namesc);
            z = strlen(list);

            
            while ( i != s) 
            {
                d = 0;
                while (d != z)
                {
                    if (namesc[i] == list[d])
                    {
                        c = c + 1;
                    }
                    
                    d = d + 1;
                }
                
                i = i + 1;
                
            }
            
           
            if (c >= 3)
            {
                printf(list);
                printf("\n");
            }
            
                c = 0;
                i = 0;
           
            list[100] = ' ';
            namesc[100] = ' ';
            al_atual_aux = al_atual_aux->anterior;
        }
    }
}

void excluir_todos(){
	printf("6 - Excluir todos\n\n");
    if(al_atual == NULL){
        printf("A lista esta vazia");
    }else{
        struct Aluno*al_atual_aux = al_atual;
        while(al_atual_aux != NULL){

            free(al_atual_aux); 

        al_atual_aux = al_atual_aux->anterior;
        }
       printf("Excluidos com sucesso!");
    }
}

void exibir_maior_menor(){
	printf("7 - Exibir o maior e o menor nome cadastrado\n\n");
    char list[100];
    char menor[100];
    char maior[100];
    int d,c,b,i,g;
    int veta[100], iMenor, iMaior;
    iMenor = 0;
    iMaior = 0;
    i = 0;
    g = 0;
    c = strlen(list);
    b = strlen(menor);
    d = 0;

    if(al_atual == NULL){
        printf("A lista esta vazia");
    }else{
        struct Aluno*al_atual_aux = al_atual;
        while(al_atual_aux != NULL){
            strcpy(list, al_atual_aux->nome);
            c = strlen(list);

            if (d == 0)
            {
                strcpy(maior, list);
            }

            if (g == 0)
            {
                strcpy(menor, list);
            }
            if (g != 0)
            {
                if (strlen(maior) <= c)
                {
                    strcpy(maior, list);

                }
                
                if (strlen(menor) >= c)
                {
                    strcpy(menor, list);
                    
                }
                
            }
            

            list[100] = ' ';
            al_atual_aux = al_atual_aux->anterior;
            g = 1;
        }
        printf("O maior nome: ");
        printf(maior);
        printf("\n");
        printf("O menor nome: ");
        printf(menor);
    }
}


	

main(){
	int opcao;
	
	do{
		system("cls");
		printf("#### SISTEMA DE GERENCIAMENTO DE ALUNOS ####\n\n");
		
		printf("1 - Cadastrar aluno\n");
		printf("2 - Consultar\n");
		printf("3 - Listar todos\n");
		printf("4 - Sair\n\n");
		
		printf("5 - Buscar por nome (completo ou uma parte do nome)\n");
		printf("6 - Excluir todos\n");
		printf("7 - Exibir o maior e o menor nome cadastrado\n\n");
		
		printf("Digite a opcao: ");
		scanf("%d",&opcao);
		system("cls");
		switch(opcao){
			case 1: cadastrar();          break;
			case 2: consultar();          break;
			case 3: listar_todos();       break;
			case 4: printf("Saindo...");  break;
			case 5: buscar_por_nome();    break;
			case 6: excluir_todos();      break;
			case 7: exibir_maior_menor(); break;
			default:
				printf("Opcao invalida!");
		}
		fflush(stdin);
		getch();
	}while(opcao!=4);
		
}


