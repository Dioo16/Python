#include <stdio.h>
int main( void )
 {
    int n1;
    int n2;
    int n3;
    int som;
    int med;
    int prod;
    printf (" Input three numbers and i do a analization\n");
    scanf( "%d %d %d", &n1, &n2, &n3);
     som = (n1+ n2 + n3);
    printf( "a soma é: %d \n",som);

    med = (n1 + n2 + n3)/2;
    printf( "a média é:%d\n", med);

    prod = (n1 * n2 * n3);
    printf( "o produto é :%d\n", prod);

    if (n1<n2 && n1<n3){
    printf( "o menor é o:%d\n", n1);
    }

    if (n2<n1 && n2<n3){
    printf( "o menor é o:%d\n", n2);
    }

    if (n3<n2 && n3<n1)
    {
     printf( "o menor é o:%d\n",n3);
      }

    if (n1>n2 && n1>n3)
    {
     printf( "o maior é o:%d\n", n1);
      }

    if (n2>n1 && n2>n3)
    {
     printf( "o maior é o:%d\n", n2);
      }

    if (n3>n2 && n3>n1)
    {
     printf( "o maior é o:%d\n", n3);
      }

   return 0;
 }