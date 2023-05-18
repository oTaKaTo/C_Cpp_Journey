#include <stdio.h>
#include<stdlib.h>
int main()
{
    int set[1000000] ,newset[1000000],counter = 0,same = 0,i = 0;
    while(i<1000000)
    {
        scanf("%d",&set[i]);
        if(set[i] > 2000000)
        {
            printf("Invalid number input!");
            system("pause");
            return 0 ;
        }
        if(set[i] <= 0 )
            break;
        i++;
        counter ++;        
    }
    i = 0;
    while(i<counter)
    {
        if(set[i]!=set[i+1])
        {
            newset[same] = set[i];
            same ++;            
        }
        i++;
    }
    printf("%d\n%d\n",counter,same);
    for(int j=0 ; j<same ; j++)
    {
        printf("%d ",newset[j]);
    }
    
    return 0;
}