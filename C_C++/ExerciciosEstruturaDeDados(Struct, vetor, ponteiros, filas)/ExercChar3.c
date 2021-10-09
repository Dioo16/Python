#include <conio.h>
#include<stdio.h>
#include<string.h>

int main()
{
    char fr[101];
    char let[] = "ADOPQRadopqr";
    char leta[] = "Bb";
    int i, c,x,d,cl,cb,count,countb,countt;
    printf(" Digite uma frase de no máximo 100 caracteres\n");
    gets(fr);
    c = strlen(fr);
    cl = strlen(let);
    cb = strlen(leta);
    count = 0;
    countb = 0;
    countt = 0;
    for ( i = 0; i < c; i++)
    {
        for ( x = 0; x < cl; x++)
        {
            if (fr[i] == let[x])
            {
                count += 1;
            }
            
        }
        
        for ( d = 0; d < cb; d++)
        {
            if (fr[i] == leta[d])
            {
                countb += 2;
            }
            
        }
        
        
    }
    
    countt = count + countb;
    printf("O numero total de buracos: %d\n", countt);
    return 0;
}