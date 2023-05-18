#include <stdio.h>


int main()
{
    int n=8;
    int left = 0 , right =0;
    for (int i = 0 ; i< n ; i++,left-- ,right++)
    {
        for(int j= -n ; j<=n ; j++)
        {
            if (j>= left && j<= right)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}