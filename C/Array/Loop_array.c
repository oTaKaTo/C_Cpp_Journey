#include <stdio.h>
#include <string.h>

int main()
{
    int number[100];
    for (int i = 0; i < 100; i++)
    {
        number[i] = i+1 ;
        if(number[i]%10 == 1)
        {
            printf("\n");
        }
        printf("%d ", number[i]);
        

    }

    return 0;
}