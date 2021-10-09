#include <stdio.h>
#include <stdlib.h>

typedef struct Data tipoData;

typedef struct Discipllina tipoDisc;

struct Data(
    int dia;
    int mes;
    int ano;

);


struct Disciplina
{
    char área [50];
    float salário[6];
};

struct Nomes{
    char nome[50];
    char endereço[70]
    tipoData Data;
    tipoDisc Disc;

}Cadastro[max];
int main(void){


    system("pause");
    return 0;
}