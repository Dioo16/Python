//Na aula de comunicação e expressão, tenho dificuldades em reconhecer uma palavra palindroma(Que é a mesma tanto de faz tanto pra frente)
//Então criei esse programa, para que possa verificar se uma palavra é palindromo ou não, por exemplo : ''Arara'', que é um Palindromo
// e formulei o encadeamento para ilustrar melhor o palindromo.
#include<stdio.h>
#include<string.h>

int main(void)
{
  
  int i, c, valor;
  char texto[30], inversa[15];
  printf("Digite uma palavra para ve-la encadeada, apos isso, verica-la se iria ser um palindromo\n");
  
  scanf("%s", &texto);
  c = strlen(texto);
  printf("A palavra = %s\n", texto);
  
   for (i=0; i<c; i++)
   {
    printf("a %d letra da palavra = %c\n",i+1, texto[i]);
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

  return 0;
}