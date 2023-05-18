#include<stdio.h>

int main ()
{
    int  i ,j , n  ;
    int pc = 0 ;
    int mc = 0 ;
    
    scanf("%d",&n) ;
    int array[n] ;
    
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&array[i]) ;
    }

    
    for (i=0 ; i<n ; i++)
    {
        if(array[i] > 0)
        {
            pc = pc + 1 ;
        }
        else if(array[i]<0)
        {
            mc = mc + 1 ;
        }
    }
    printf("%d\n",pc);
    printf("%d",mc);
    
    return 0 ;
}