#include<stdio.h>
#include<string.h>

    void fn1()
{
    int i, cont;
    char ch[101];
    char ca;
    printf("Digite um caractere a ser substituido na frase\n");
    scanf("%s", &ca);
    getchar();
    printf("Digite uma frase de até 100 caracteres\n");
    scanf("%[^\n]s", &ch);
    printf("Frase normal:\n");
    printf("%s \n",ch);
    printf("Frase substituida:\n");
    cont = strlen(ch);
    for ( i = 0; i <cont; i++)
    {
        if (ca == ch[i])
        {
           printf("*");
        }
        else
        {
            printf("%c", ch[i]);
        }
        
    }
    return;

}

int fn2(int ele)
{
   int i, x, count;
   int vet [50];
   count = 0;
    printf("Digite 50 inteiros\n");
    for (x = 0; x < 50; x++)
    {
         scanf("%d", &vet[x]);
    }
    
    for ( i = 0; i < 50; i++)
    {
        if (ele == vet[i])
        {
         count += 1;
        
        }
            
      
    }
    if (count == 2)
    {
        printf("Aparece duas vezes no vetor");
        return 1;
    }
    
    if (count == 1)
    {
        printf("nao aparece duas vezes");
        return 0;
    }
    
    if (count == 0)
    {
        printf("nao aparece duas vezes no vetor");
        return 0;
     }
    
}


int main(void)
{
    int fn, num;
    printf("Funcao 1 ou 2?, digite o numero pela funcao respectiva:\n");
    scanf("%d", &fn);

    if (fn == 1)
    {
        fn1();
    }
    else
    {
       printf("Digite o elemento a ser verificado(numero)");
       scanf("%d", &num);
       fn2(num); 
    }
    

}
