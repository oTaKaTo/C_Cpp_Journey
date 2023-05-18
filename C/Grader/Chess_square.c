#include <stdio.h>


int main()
{
    int w,l;

    scanf("%d %d",&w,&l);

    if(w < 3 || l<3)
    {
        printf("ERROR!");
    }
    else
    {
        for(int i = 0 ; i<w ; i++)
        {
            for(int j =0 ; j<l ; j++)
            {
                if((i+j)%2 == 0)
                {
                    printf("O");
                }
                else
                {
                    printf("X");
                }
            }
            printf("\n");
        }
    }
    return 0;
}