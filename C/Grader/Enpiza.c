#include <stdio.h>
#include <string.h>

int main()
{
    int n ;

    scanf("%d",&n);

    for(int k = 0 ; k < n ; k++)
    {
        for (int j=0 ; j<n ; j++)
        {
            for(int i =0 ; i<n ; i++)
            {
                printf("#");
            
            }   
            printf("\n");
        }
        printf(" ");
    }   
    return 0;
}