#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    printf("Enter row :");
    scanf("%d", &n);

    for (int y = 1; y <= n; y++)
    {
        for (int x = 1; x <= n; x++)
        {
            if ((x + y) % 2 == 0)
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
    return 0;
}