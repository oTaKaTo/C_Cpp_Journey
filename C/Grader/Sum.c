#include <stdio.h>
#include <string.h>

int main()
{
    
    int i,j = 0 ;
    int array[j]  ;
    int sum = 0 ;
    for(i =0 ; i<100 ; i++)
    {
        scanf("%[^\n]",&array[j]);
        sum += array[i];
    }

    printf("%d",sum);
    return 0;
}