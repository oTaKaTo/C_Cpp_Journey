#include <stdio.h>
#include <string.h>

int main()
{
    char str[50] , *p ;
    p = str ;
    printf("Enter String : ");
    scanf("%s",str);

    while(*p != '\0')
    {
        if(*p >= 'a' && *p <= 'z')
        {           
            *p -= 32 ;
            printf("%c",*p);
        }
        else if(*p >= 'A' && *p <= 'Z')
        {
            *p += 32 ;
            printf("%c",*p);
        }
        p++;
    }
    
    return 0;
}