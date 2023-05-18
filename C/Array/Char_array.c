#include <stdio.h>
#include<string.h>

int main()
{
    char name[100]  ;
    printf("What is your name : ");
    scanf("%[^\n]s",name);
    printf("Nice to meet you %s",name);

    return 0;
}