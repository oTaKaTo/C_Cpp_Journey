#include <stdio.h>
#include <string.h>

int main()
{
    int row, column, i, j;
    printf("How many rows ? : \n");
    scanf("%d", &row);

    printf("How many columns ? : \n");
    scanf("%d", &column);
   
    int a[row][column];
    for (i = 0; i < column ; i++)
    {
        for (j = 0; j < row; j++)
        {
            printf("Enter index [%d][%d] :",i,j) ;
            scanf("%d",&a[i][j]) ;
            
        }
        
    }
    
    for (i = 0; i < column ; i++)
    {
        for (j = 0; j < row; j++)
        {
            printf("%d ",a[i][j]) ;                     
        }
        printf("\n");
    }
    
    return 0;
}