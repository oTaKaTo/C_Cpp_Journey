#include <stdio.h>
#include <string.h>
#include<stdlib.h>

int main()
{
    int k,n ;
    scanf("%d %d",&k,&n);  
    if(n<2 || n>2000)
    {
        printf("Please enter a valid n! \n");
        system("pause");
    }  
    int set[n][500];
    int j = 0,countset[n];
    
    for(int i = 0 ; i< n ; i++)
    {
        while(j<500)
        {
            scanf("%d",&set[i][j]);
            if(set[i][j] == 0)
            {
                break;
            }
            j++;
        }
        j = 0;
    }
    
    for(int i = 0 ; i< n ; i++)
    {
        countset[i] = 0;
        while(set[i][j] != 0)
        {
            if(set[i][j]%k ==0 && set[i][j]>0)
            {
                countset[i]++;
            }
            j++;
        }
        j = 0;
    }
    int max = countset[0];
    int maxindex = 0;
    for(int i = 0 ; i< n ; i++)
    {
        if(max<=countset[i])
        {
            max = countset[i];
            maxindex = i+1;
        }
    }
    printf("%d %d",maxindex,max);
        
    return 0;
}