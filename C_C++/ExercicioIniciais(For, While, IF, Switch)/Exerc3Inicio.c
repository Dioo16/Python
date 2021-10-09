#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    int tri;
    printf("Enter the values of A,B,C, respectively\n");
    scanf( "%d %d %d", &a, &b, &c);

     if (a>b && a>c)
    {
      tri = b + c;
        if(tri>a){
            printf("This is a triangle");
        }
        else
        {
            printf("This is not a triangle");
        }
          }   
    

    if (b>a && b>c)
    {
      tri = a + c;
        if(tri>b){
            printf("This is a triangle");
        }
        else
        {
            printf("This is not a triangle");
        }
          }   
      

    if (c>a && c>b)
    {
      tri = a + b;
        if (tri>c)
        {
            printf("This is a triangle");
        } 
        else
        {
            printf("This is not a triangle");
        }
          }   
      

return 0;
}