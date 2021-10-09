
#include<stdio.h>
#include<string.h>

int main()
{   
    int i,cb,ca;
    char a [51];
    char b [51];
   
    printf("Digite duas frases de no máximo 50 caracteres\n");
    gets(a);
    gets(b);

    ca = strlen(a);
    cb = strlen(b);

    if (ca>cb)
    {
        for ( i = 0; i < ca; i++)
        {
            if (i<ca)
            {
                printf("%c", a[i]);
            }

            if (i<cb)
            {
                printf("%c", b[i]);
            }
            
            
            
        }
        
        
    }
    

 if (cb>ca)
    {
        for ( i = 0; i < cb; i++)
        {
            if (i<ca)
            {
                printf("%c", a[i]);
            }

            if (i<cb)
            {
                printf("%c", b[i]);
            }
            
            
            
        }
        
        
    }
 
    
    
    return 0;
}
