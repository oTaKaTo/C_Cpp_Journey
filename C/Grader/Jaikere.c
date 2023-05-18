#include <stdio.h>
#include <string.h>

int main()
{
    char message[100];

    scanf("%s",message);

    int mlen = strlen(message) ;

    for(int i = 0 ; i<mlen ; i++)
    {
        printf("%c ",message[i]);
        
    }
    return 0;
}