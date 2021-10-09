#include <stdio.h>

int main(void)
{
    int Numeros[10];
    int Saoamigos[5];
    int divid[10];
    int i,n,cont1,cont2,x,z,t,u,k;
    k = 0;
    u = 0;
    cont1 = -2;
    cont2 = -1;
   
    for ( i = 0; i < 10; i++)
    {
        printf("Informe o %d numero \n", i+1);
        scanf("%d", &n);
        Numeros[i] = n;
    }  

   
  for ( z = 0; z < 10; z++)
  {
      divid[z] = k;
      t = 1;
      k = 0;
      while (Numeros[z]/t != 1)
      {
        if (Numeros[z] % t == 0)
         {
             k = k + t;
             divid[z] = k;
         }
    
     t = t + 1;  
      }
  }
for (x = 0; x < 5; x++)
{
    cont1 = cont1 + 2;
    cont2 = cont2 + 2;

    
    if (divid[cont1] == Numeros[cont2] &  Numeros[cont1] == divid[cont2])
    {
        Saoamigos[x] = 1;
    }
    else
    {
        Saoamigos[x] = 0;
    }

}


for ( x = 0; x < 4; x++)
{
    printf("%d\n", Saoamigos[x]);
}

    return 0;
}

