#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


// Aritmética dos ponteiros se dá ao conjunto de operações aritméticas que podem ser realizadas em ponteiros. Um ponteiro pode ser 
// incrementado (++) ou decrementado (--), um inteiro pode ser somado a um ponteiro (+ ou +=), um inteiro pode ser subtraído de um ponteiro
//(- ou -=) e um ponteiro pode ser subtraído de outro. Em resumo um ponteiro pode ser incrementado ou decrementado, sendo somado ou subtraído.
//é importante ressaltar que a quantidade de bytes a ser substraida ou adcionada vária com o tipo de dados, ex: int = 4 bytes, char = 1 byte...
// EXEMPLO:

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int *p1,d,*p2;
    p2 = p1;
    

    printf("A soma aritmetica de um ponteiro, numero inicial:");
    printf(" %d \n", p1);
    p1++;
    printf("A realocacao de endereco, vai de acordo com o tipo do parâmetro, nesse exemplo é usado o int, logo, 4 bytes\n");
    printf("Numero do endereco apos a realocacao(causada pelo aumento da soma):");
    printf(" %d \n", p1);
    printf("Percebe-se que o numero do endereco aumentou em 4 bytes comparado ao inicio.\n");
    printf("Seguindo a logica, em uma operacao de subtracao deve acontecer o mesmo, so que subtraindo do endereco.\n");
    p1--;
    printf("Numero do endereco apos a subtracao: ");
    printf(" %d \n", p1);
    printf("Verificando, podemos ver que o endereco voltou ao numero inicial");
    printf("\n");
    printf("\n");
    
    printf("Para melhor visualizacao, digite um numero a ser somado ou subtraido(coloque em negativo caso queira subtrair)\n");
    scanf("%d", &d);
    p1 = p1 + d;
    printf("O numero de endereço a ser realocado ao ponteiro deve ser a operacao  do numero vezes 4\n");
    printf("Neste caso, a relocacao deve ser de: %d somado ou subtraido ao endereco inicial\n", d * 4);
    printf("Conferindo: %d + %d == %d", p2, d * 4, p1);

    return 0;
}