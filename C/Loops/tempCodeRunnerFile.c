#include <stdio.h>

int main()
{
    int n,i,j,k ;
    printf("Enter width of square : ");
    scanf("%d",&n);
    printf("Enter length of square : ");
    scanf("%d",&k);
    for (i=0;i<n;i++)
    {
        for(j=0;j<k;j++)
        {
            printf("*") ;
        }
        printf("\n");
    }
    return 0;
}