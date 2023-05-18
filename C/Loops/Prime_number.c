#include <stdio.h>

int main()
{
    int num , count ;
    printf("Enter last number that you want to check :") ;
    scanf("%d",&num);
    int isPrime = 1 ;
    for(int j = 2 ; j<num ; j++ )
    {
        for(i)
        {
        
            if(num%j == 0)
            {
                isPrime = 0 ;
                break ;
            }
            if(isPrime)
            {
                count++ ;
                printf("%d. %d\n",count,num);
            }
        }
    }
    

    return 0;
}