#include <stdio.h>
#include <string.h>

int main()
{
    char mail[1000];
    
    scanf("%[^\n]",mail);

    int mlen = strlen(mail);

    for(int i = mlen-1 ; i >=0 ; i--)
    {
        printf("%c",mail[i]);
    }
    return 0;
}