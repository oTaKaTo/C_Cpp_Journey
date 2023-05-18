#include <stdio.h>

int main()
{
    int number = 10 ;
    int i , count = 0 ;
    int a[number];
    for(i=0 ; i<number ; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0 ; i<number ; i++)
    {
        if(a[i] > 99999)
        {
            return 0;
        }
    }
    
    for (i = 1; i < number; i++)
    {
            if(a[i] < a[i-1])
            {
                count += 1 ;
            }

    }

    printf("%d", count) ;
    
    return 0;
}