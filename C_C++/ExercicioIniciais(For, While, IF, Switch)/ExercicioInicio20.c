#include<stdio.h>
#include<string.h>

int pa(int in, int fi)
{
    int i, count, re;
    re = 0;
    count = 0;
    if (fi <= 1)
    {
        return 1;
    }
    else
    {
        for ( i = 0; i < fi; i++)
        {
            count += 1;
            re += count;
    
        }
    }
    return(re);
}

int main(void)
{
    int i,f, resul;
    printf("Digite o valor inicial e o valor final(respectivamente)\n");
    scanf("%d %d", &i, &f);
    resul = pa(i,f);
    printf("O resultado = %d", resul);

}