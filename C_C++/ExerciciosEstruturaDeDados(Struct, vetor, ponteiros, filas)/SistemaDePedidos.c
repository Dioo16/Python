#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 300
    struct value
    {
        float valuet[size];
    };
    

    struct name
    {
        char nome[size][50];
        int codigop[size];
        int numero[size];
        int cpf[size];
    };

    
    struct datas
    {
        int diaa[size];
        int meses[size];
        int anoo[size];
    };

    
    struct iitens
    {

        char items[size][50];
        int codg[size];
        int quanti[size];
        float valor[size];
        int total[size];
    };
    
    

    
int main(void)
{
    float valortotal;
    int i,d,f,g,v,z,y,k,u,m,l,p;
    z = 0;
    l = 0;
    p = 0;
    y = 1;
    k = 0;
    i = 0;
    struct name comprador;
    valortotal = 0;
    struct datas dat;
    struct iitens item;
    struct value valuetotal;
    char nomes [50];
    
    
    

    int opcao;
	
	do{
		system("cls");
		printf("#### SISTEMA DE GERENCIAMENTO DE PEDIDOS! ####\n\n");
		
		printf("1 - Cadastrar comprador(necessario para cadastrar o pedido)\n");
		printf("2 - Cadastrar pedido por comprador respectivamente\n");
		printf("3 - Mostrar todos os pedidos cadastrados\n");
		printf("4 - Sair\n");	
		printf("5 - Buscar pedido por nome \n");
		printf("6 - Buscar pedido por cpf\n");
		
		printf("Digite a opcao: ");
		scanf("%d",&opcao);
		system("cls");
		switch(opcao){
                case 1:
                do{
                 printf("Informe o nome do comprador(sem espacos)\n");
                scanf("%s", comprador.nome[l]);
                printf("Informe o numero do comprador:\n");
                scanf("%d", &comprador.numero[l]);  
                printf("Informe o cpf do comprador\n");
                scanf("%d", &comprador.cpf[l]);  
                printf("Deseja continuar?, se sim digite 1, caso contrário digite outro número\n");
                scanf("%d", &d);
                if(d != 1)
                {
                printf("Tecle enter para continuar...");
                }
                l++;
                }while(d == 1);
                break;
            
			    case 2:
                do{
                        printf("Cadastrar o pedido do comprador: %s\n", &comprador.nome[p]);
                        valortotal = 0;
                        d = 0;
                        printf("DATA:dd/mm/aaaa \n");
                        printf("Digite o dia\n");
                        scanf("%d", &dat.diaa[p]);
                        printf("Digite o mes\n");
                        scanf( "%d", &dat.meses[p]);
                        printf("Digite o ano\n");
                        scanf("%d", &dat.anoo[p]);
                        printf("Informacoes sobre o pedido\n");
                        printf("Informe código do pedido\n");
                        scanf("%d", &comprador.codigop[p]);
                        printf("Digite a quantidade total de itens\n");
                        scanf("%d", &item.total[p]);

                        
                        do{
                            printf("Digite o nome do %d item, codigo, quantidade dele e seu valor(de forma separada)\n", d+1);
                            scanf("%s %d %d %f", &item.items[i], &item.codg[i], &item.quanti[i], &item.valor[i]);
                            valortotal = valortotal + ( item.quanti[i] * item.valor[i]);
                            i++;
                            d++;
                        }while(d != item.total[p]);
                            valuetotal.valuet[p] = valortotal;
                            p++;
                            }while(p != l );
                             if(p == l)
                                {
                                printf("Tecle enter para continuar...");
                                }
                        break;
			    case 3:
                    k = 0;
                        for ( z = 0; z < l; z++)
                        {       
                                                         
                        printf("--------------------------------------------------INFORMACOES DO PEDIDO--------------------------------------------------------\n");
                       printf("|Comprador: %s|Número: %d |cpf: %d |\n", comprador.nome[z], comprador.numero[z], comprador.cpf[z]);
                       printf("Codigo do pedido: %d|\n", comprador.codigop[z]);
                        printf("O pedido foi feito em : %d/%d/%d|\n", dat.diaa[z], dat.meses[z], dat.anoo[z]);
                        printf("Os produtos sao: \n");
                            for ( m = 0; m < item.total[z]; m++)
                            {
                            printf("nome: %s | codigo do produto: %d |quantidade: %d |valor:%.2f\n", item.items[k], item.codg[k], item.quanti[k], item.valor[k]);
                            k++;
                            }
                            printf("O valor total: %0.2f\n", valuetotal.valuet[z]);
                        printf("---------------------------------------------------------------------------------------------------------------------------------\n");
                        }
                break;
			    case 4:  
                    printf("Saindo......");
                break;

			case 5:
                g = 0;
                p = 0;
                printf("Digite o nome\n");
                scanf("%s", &nomes);
                system("cls");
                for ( i = 0; i < size; i++)
                {
                    p = p + item.total[i];
                    if(strcmp(comprador.nome[i], nomes)==0)
                    {
                        printf("--------------------------------------------------INFORMACOES DO PEDIDO--------------------------------------------------------\n");
                       printf("|Comprador: %s|cpf: %d |Numero: %d |\n", comprador.nome[i], comprador.numero[i], comprador.cpf[i]);
                       printf("Codigo do pedido: %d|\n", comprador.codigop[i]);
                       printf("O pedido foi feito em : %d/%d/%d|\n", dat.diaa[i], dat.meses[i], dat.anoo[i]);
                       printf("Os produtos sao: \n");
                        
                       
                        
                        for (g = (p - item.total[i]); g < p; g++)
                        {
                            
                            printf("nome: %s | codigo do produto: %d |quantidade: %d |valor:%.2f\n", item.items[g], item.codg[g], item.quanti[g], item.valor[g]);
                        }
                            printf("O valor total: %0.2f\n", valuetotal.valuet[i]);
                        printf("---------------------------------------------------------------------------------------------------------------------------------\n");
                        system("pause");
                    }
                }
                
            



            break;
			case 6:
                g = 0;
                p = 0;
                printf("Digite o cpf\n");
                scanf("%d", &y);
                system("cls");
                for ( i = 0; i < size; i++)
                {
                    p = (p + item.total[i]);
                    if(comprador.cpf[i] == y)
                    {
                        printf("--------------------------------------------------INFORMACOES DO PEDIDO--------------------------------------------------------\n");
                       printf("|Comprador: %s|cpf: %d |Numero: %d |\n", comprador.nome[i], comprador.numero[i], comprador.cpf[i]);
                       printf("Codigo do pedido: %d|\n", comprador.codigop[i]);
                       printf("O pedido foi feito em : %d/%d/%d|\n", dat.diaa[i], dat.meses[i], dat.anoo[i]);
                       printf("Os produtos sao: \n");
                        


                        
                        for (g = (p - item.total[i]); g < p; g++)
                        {
                            
                            printf("nome: %s | codigo do produto: %d |quantidade: %d |valor:%.2f\n", item.items[g], item.codg[g], item.quanti[g], item.valor[g]);
                        }
                            printf("O valor total: %0.2f\n", valuetotal.valuet[i]);
                        printf("---------------------------------------------------------------------------------------------------------------------------------\n");
                        system("pause");
                    }
                }
              break;
			default:
				printf("Opcao invalida!");
		}
		fflush(stdin);
		getch();
	}while(opcao!=4);
    return 0;
}

