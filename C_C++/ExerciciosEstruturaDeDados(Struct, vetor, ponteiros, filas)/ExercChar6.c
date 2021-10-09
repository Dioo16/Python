#include <conio.h>
#include<stdio.h>
#include<string.h>
#include <ctype.h>

int main(void)
{
  
  int i, c, valor;
  char texto[30], inversa[15];
  printf("Digite uma palavra para ve-la encadeada, apos isso, verica-la se iria ser um palindromo");
  
  scanf("%s", &texto);
  c = strlen(texto);
  printf("Valor da variavel texto = %s\n", texto);
  
   for (i=0; i<c; i++)
   {
    printf("Valor do elemento %d da string = %c\n",i, texto[i]);
   }

 for(i = 0; texto[i]; i++){
   texto[i] = tolower(texto[i]);
 }


 strcpy(inversa, texto);


 strrev(inversa);

 valor = strcmp(texto, inversa);

 if (valor == 0)
   printf("\nA palavra %s veio a ser palindroma\n", texto);
 else
   printf("\nA palavra %s nao veio a ser palindroma\n", texto);

  getch();
  return 0;
}