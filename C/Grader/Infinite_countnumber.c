#include<stdio.h>

int main () 
{
    int i ;

    scanf("%d",&i);

    if(i<1)
    {
        printf("ERROR!");
    }
    else
    {
        for (int j = i; j > 0; j--)
        {
            for(int k = 1 ;k<=j;k++)
            {
                printf("%d",k);
            }
        }
        
    }
    return 0;
}