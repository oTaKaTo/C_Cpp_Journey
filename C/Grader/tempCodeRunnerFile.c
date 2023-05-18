#include <stdio.h>
#include <string.h>

int main()
{
    int size,a,b,i ;
    
    scanf("%d",&size);
    
    int array[size] ;
    
    for(i=0 ; i< size ; i++)
    {
        scanf("%d",&array[i]) ;
        if (array[i] * 1 == array[i])
        {
            printf("Invalid Input");
            return 0;
        }
        
    }    
    
    
    for(i=0 ; i<size ; i++)
    {
        if(array[i]%2 == 0)
        {
            printf("%d ",array[i]) ;
        }
    }
    for(i=0 ; i<size ; i++)
    {
        if(array[i]%2 == 1)
        {
            printf("%d ",array[i]) ;
        }
    }
    
    return 0;
}