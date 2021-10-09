#include <stdio.h>
int main()
{
    int a;
    printf( "put a number to check it\n" );
    scanf( "%d", &a );
    if (a>=100 && a<=200)
        printf("Its number is in the parameter");
    else
        printf("The number is outside the parameter");
    
    

    return 0 ;

}