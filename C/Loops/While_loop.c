#include <stdio.h>

int main()
{
    int k = 1 ;
    int sum = 0 ; 
    int i = 61 ;
    while(i>0) 
    {
        sum = sum + ((i% 2)*k) ;
        i /= 2  ;
        k *=10 ;
    }
    printf("%d",sum);
    return 0;
}