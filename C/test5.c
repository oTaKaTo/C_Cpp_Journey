#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    printf("Enter row :");
    scanf("%d", &n);

    for (int y = n; y >= 1; y--)
    {
        for (int x = 1; x <= n; x++)
        {
            if(y<=x)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
}