#include <stdio.h>
#include <string.h>

int main()
{
    char a ;
    char b[10] ;
    char blank = ' ' ;
    int i , j ;

    scanf("%c",&a) ;
    scanf("%[^\n]s",&b) ;
    
    int n = strlen(b) ;
    
    for (i=0 ; i < n ; i++)
    {
        if(b[i] != a )
            printf("%c",b[i]) ;
        else if(b[i] = blank)
            printf(" ");
        else
            break;
    }

    return 0;
}