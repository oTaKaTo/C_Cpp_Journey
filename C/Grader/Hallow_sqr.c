#include <stdio.h>
#include <string.h>

int main()
{
    int i,j ,n ;
    scanf("%d",&n) ;

    if(n < 1)
    {
        printf("ERROR!") ;
    }
    else
    {
        for(i=0;i<n;i++) 
        {
            for(j=0;j<n;j++)
            {
                if(i==0 || i==n-1 || j==0 || j == n-1)
                {
                    printf("#");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}