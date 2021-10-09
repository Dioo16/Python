#include<stdio.h>
#include<string.h>


 void f1 (int m[3][3], int *vets)
{
    int i,x,z,sum;
    for(i=0; i<3; i++)
    {
        sum = 0;
        x=0;
        while (x < 3)
        {
            sum += m[i][x];
            x += 1;
        }
        
        vets[i] = sum;
    }
  
        return;
   
}

int f2(int *n, int *d)
{
    int i,x,count;
    for ( i = 0; i < 10; i++)
    {
        printf("Numero: %d\n", n[i]);
        for ( x = 0; x <5 ;x++)
        {
            if (n[i] % d[x] == 0)
            {
                printf("divisivel por  %d, na posicao %d \n", d[x], x+1);
                count = 0;
            }
            count += 1;
        }

        if (count == 6)
        {
            printf("Nao possui divisores no segundo vetor\n");
        }
        
        
    }
    
//5,12,4,7,10,3,2,6,23,16
//3,11,5,8,2



}


int main(void)
{
    int vetss [3];
    int num[10];
    int divis[5];
    int n,i,x,z;
    int m [3][3];
    printf("Digite 1 para f1, 2 para f2\n");
    scanf("%d", &n);
    if(n == 1)
    {
        printf("Digite 9 numeros\n");
        for ( i = 0; i < 3; i++)
        {
            for( x=0; x<3; x++)
            {
               scanf("%d", &m[i][x]); 
            }
    
        }
         f1(m, &vetss[z]);
         printf("\n");
         for ( z = 0; z < 3; z++)
        {
            printf("%d\n", vetss[z]);
        }
            
           

    }

    else
    {
        printf("Digite 10 numeros\n");
        
        for ( i = 0; i < 10; i++)
        {
            scanf("%d", &num[i]);
        }
        printf("Digite 5 numeros\n");
        for ( x = 0; x < 5; x++)
        {
            scanf("%d", &divis[x]);
        }
        f2(num, divis);
       
    }
    
}