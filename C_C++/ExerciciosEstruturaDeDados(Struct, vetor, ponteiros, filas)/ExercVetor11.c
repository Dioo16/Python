#include<stdio.h>
#include<string.h>




    int func(int *veta,int *vetb)
{

    int i,x,count;
   for ( i = 0; i <10; i++)
    {
        count = 1;
        
        for ( x = 0; x <10; x++)
        {
            
            if (veta[i] == vetb[x])
            {
                count += 1;
            }
           
            
        }
        if (count > 1)
        {
            for ( x = 0; x < count; x++)
            {
                printf("%d,", veta[i]);
            }
            printf("\n");
        }
        

    }
    
 
    return 0;
}

int main(void)
{
    int i,x;
    int veta[10]; 
    int vetb[10];
    printf("Digite 20 números\n");
    
    for ( i = 0; i < 10; i++)
    {
        scanf("%d", &veta[i]);
    }
    printf("para o vetorb\n");
      for ( x = 0; x < 10; x++)
    {
        scanf("%d", &vetb[x]);
    }
    func(veta, vetb);

}
//veta{19, 5, 2, 6, 3, 7, 20, 8, 9, 10} 
//Vet2={5, 0, 19, 4, 9, 5, 80, 19, 34, 5}