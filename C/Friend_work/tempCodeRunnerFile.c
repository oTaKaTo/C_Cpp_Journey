#include <stdio.h>
#include <string.h>

int main()
{
    int x ,y ;
    scanf("%d %d",&y,&x);
    int area[y][x];
    for(int i = 0 ; i < y ; i++)
    {
        for(int j = 0 ; j < x ; j++)
        {
            scanf("%d",&area[i][j]);
        }    
    }
    int sum1[100], sum2[100] , count = 0;
    for(int i = 0 ; i < y ; i++)
    {
        for(int j = 0 ; j < x ; j++)
        {
            if(area[i][j] == 0 && i>0 && i<y-1 && j> 0 && j<x-1)
            {
                sum1[count] = 0;
                sum1[count] += area[i-1][j-1] ;
                sum1[count] += area[i-1][j];
                sum1[count] += area[i-1][j+1];
                sum1[count] += area[i][j-1];
                sum1[count] += area[i][j+1];
                sum1[count] += area[i+1][j-1];
                sum1[count] += area[i+1][j] ;
                sum1[count] += area[i+1][j+1] ;

                count++;
            }
        }
    }
    int max = sum1[0];
    for(int s = 1 ; s < count - 1 ; s++)
    {
        if(sum1[s] >= max)
        {
            max = sum1[s];
        }
    }

    for(int i = 0 ; i < y ; i++)
    {
        for(int j = 0 ; j < x ; j++)
        {
            if(area[i][j] == 0 && i>0 && i<y-1 && j> 0 && j<x-1)
            {
                sum2[count] = 0;
                sum2[count] += area[i-1][j-1] ;
                sum2[count] += area[i-1][j];
                sum2[count] += area[i-1][j+1];
                sum2[count] += area[i][j-1];
                sum2[count] += area[i][j+1];
                sum2[count] += area[i+1][j-1];
                sum2[count] += area[i+1][j] ;
                sum2[count] += area[i+1][j+1] ;
                if(sum2[count] == max)
                {
                    printf("X ");
                }
                else
                {
                    printf("%d ",area[i][j]);
                }
                count++;
            }
            else
            {
                printf("%d ",area[i][j]);
            }
        }
        printf("\n");
    }


    if(count == 0)
    {
        printf("Cannot place springer");
        return 0;
    }
    


    return 0;
}