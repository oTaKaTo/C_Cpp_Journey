#include <stdio.h>
#include <math.h>

int main()
{
    int isPrime = 1 ;
    int x,j;
    scanf("%d",&x) ;

    for(j=2 ; j<sqrt(x) ; j++)
    {
        if(x%j == 0)
        {
            isPrime = 0 ;
            break;
        }                
    }

    if(isPrime && x>=2)
    {
        printf("%d is PRIME",x) ;
    }
    else
    {
        printf("%d is NOT PRIME",x) ;
    }
    return 0;
}