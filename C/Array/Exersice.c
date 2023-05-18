#include <stdio.h>
#include <string.h>

int main()
{
    char first_str [100] ;
    char second_str [100] ;
    
    printf("Input your first sring : ") ;
    scanf("%[^\n]%*c",&first_str);
    
    printf("Input your second string : ");
    scanf("%[^\n]%*c",&second_str);

    int result = strcmp(first_str,second_str);

    if(result == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}