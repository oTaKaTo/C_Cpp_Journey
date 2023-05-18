#include <stdio.h>
#include <string.h>

int main()
{
    char str1[10] = "I love ", str2[] = "my cat" ;
    strcat(str1,str2);

    printf("str1 = %s",str1);
    printf("\nstr2 = %s",str2);
    return 0;
}