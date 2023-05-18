#include<stdio.h>
#include<string.h>

int main()
{
    
    char a ,g ;
    char b[100] ;
    
    scanf("%c",&a) ;
    int i , j ;
    scanf("%c",&g) ;
    scanf("%[^\n]s",b) ;
      
    char blank = ' ' ;

    int n = strlen(b) ;
    
    if (a == '\n')
            printf("%c",g);
    
    for (i=0 ; i < n ; i++)
    {        
        if (b[i] == a)
            return 0 ;       

        else if(b[i] != a )
            printf("%c",b[i]) ;               
        else  
            return 0;
    }
    
    return 0 ;
}