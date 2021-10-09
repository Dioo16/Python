#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
int main()
{
    FILE * file;
    file = fopen("‪‪Trabalhomerda.txt", "w");
    fprintf(file,"prof idiota");
    fclose(file);


    return 0;
}