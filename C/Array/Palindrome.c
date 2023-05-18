#include <stdio.h>
#include <string.h>

int main()
{
    char a [100] ;
    int i ;
    
    printf("Enter the string to check if it is a palindrome\n");
    scanf("%s",&a) ;

    char b[100] ;
    strcpy(b,a);

    int string2_length = strlen(b);

    int j = string2_length -1  ;
    for(i=0;i < strlen(b) ;i++,j--)
    {
        if(a[i] != b[j])
        {
            printf("NO");
            return 0 ;
        }
        else
        {
            printf("YES");
            return 0 ;
        }

    }
    return 0;
}