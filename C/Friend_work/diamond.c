#include <stdio.h>


int main()
{
    int n ;
    
    printf("Enter size : ");
    scanf("%d",&n);

    int mid = (n+1)/2 ;

    for(int y= 1 ; y<= n ; y++)
    {
        for(int x = 1 ; x<=n ; x++)
        {
            if(y<= mid && x <= mid+y-1 && x >= mid-y+1)
            {
                printf("*");
            }
            else if(y> mid && x > y-mid && x <= 3*mid-y-1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            printf("");
        }
        printf("\n");
    }
    return 0;
}